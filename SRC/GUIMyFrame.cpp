#include "GUIMyFrame.h"
#include "ConfigClass.h"
#include "ChartClass.h"

GUIMyFrame::GUIMyFrame(wxWindow* parent) : MyFrame1(parent)
{
	cfg = std::make_shared<ConfigClass>(this);
}

GUIMyFrame::~GUIMyFrame()
{}

void GUIMyFrame::MainFormClose(wxCloseEvent& event)
{
	Destroy();
}

void GUIMyFrame::XRot_Updated(wxScrollEvent& event)
{
	cfg->SetX_Rot(m_XRotationSlider->GetValue());
	Repaint();
}

void GUIMyFrame::YRot_Updated(wxScrollEvent& event)
{
	cfg->SetY_Rot(m_YRotationSlider->GetValue());
	Repaint();
}

void GUIMyFrame::ZRot_Updated(wxScrollEvent& event)
{
	cfg->SetZ_Rot(m_ZRotationSlider->GetValue());
	Repaint();
}
// -------------
void GUIMyFrame::XA_Updated(wxCommandEvent& event) {
	double v;
	if (cfg->get_Polar()) {
		if (m_AXText->GetValue().ToDouble(&v))
		{
			cfg->SetR(v);
			Repaint();
		}
	}
	else {
		if (m_AXText->GetValue().ToDouble(&v))
		{
			cfg->SetX_A(v);
				Repaint();
		}
		else wxBell();
	}
}

void GUIMyFrame::YA_Updated(wxCommandEvent& event) {
	double v;
	if (m_AYText->GetValue().ToDouble(&v))
	{
		cfg->SetY_A(v);
		Repaint();
	}
	else wxBell();
}

void GUIMyFrame::ZA_Updated(wxCommandEvent& event) {
	double v;
	if (m_AZText->GetValue().ToDouble(&v))
	{
		cfg->SetZ_A(v);
		Repaint();
	}
	else wxBell();
}
// -------------
void GUIMyFrame::XTheta_Updated(wxCommandEvent& event) {
	double v;
	if (m_ThXText->GetValue().ToDouble(&v))
	{
		cfg->SetX_theta(v);
		Repaint();
	}
	else wxBell();
}

void GUIMyFrame::YTheta_Updated(wxCommandEvent& event) {
	double v;
	if (m_ThYText->GetValue().ToDouble(&v))
	{
		cfg->SetY_theta(v);
		Repaint();
	}
	else wxBell();
}

void GUIMyFrame::ZTheta_Updated(wxCommandEvent& event) {
	double v;
	if (m_ThZText->GetValue().ToDouble(&v))
	{
		cfg->SetZ_theta(v);
		Repaint();
	}
	else wxBell();
}
// -------------
void GUIMyFrame::XPhi_Updated(wxCommandEvent& event) {
	double v;
	if (m_PhiXText->GetValue().ToDouble(&v))
	{
		cfg->SetX_phi(v);
		Repaint();
	}
	else wxBell();
}

void GUIMyFrame::YPhi_Updated(wxCommandEvent& event) {
	double v;
	if (m_PhiYText->GetValue().ToDouble(&v))
	{
		cfg->SetY_phi(v);
		Repaint();
	}
	else wxBell();
}

void GUIMyFrame::ZPhi_Updated(wxCommandEvent& event) {
	double v;
	if (m_PhiZText->GetValue().ToDouble(&v))
	{
		cfg->SetZ_phi(v);
		Repaint();
	}
	else wxBell();
}
// -------------
void GUIMyFrame::DotsLines_Updated(wxCommandEvent& event)
{
	if (m_radioBox1->GetSelection() == 0) {
		cfg->Set_Points(false);
	}
	else {
		cfg->Set_Points(true);
	}
	Repaint();
}

void GUIMyFrame::Animation_Updated(wxCommandEvent& event)
{
	if (animationBox->GetSelection() == 0) {
		cfg->Set_Animation(false);
	}
	else {
		cfg->Set_Animation(true);
	}
	Repaint();
}

void GUIMyFrame::ParamType_Updated(wxCommandEvent& event) {
	if (ParamBox->GetSelection() == 0) { //uklad kartezjanski
		cfg->Set_ParamType(false);
		m_AYText->SetEditable(true);
		m_AZText->SetEditable(true);
		m_AYText->Clear();
		m_AZText->Clear();
		m_staticText5->SetLabel("A");
		m_staticText53->SetLabel("A");
		m_staticText54->SetLabel("A");
		m_staticText51->SetLabel(wxT("θ"));
		m_staticText51->SetLabel(wxT("θ"));
		m_staticText51->SetLabel(wxT("θ"));
		m_staticText19->SetLabel("X");
		m_staticText18->SetLabel("Y");
		m_staticText4->SetLabel("Z");
	}
	else {
		cfg->Set_ParamType(true);
		m_AYText->SetEditable(false);
		m_AYText->Clear();
		m_AYText->AppendText("-");
		m_AZText->SetEditable(false);
		m_AZText->Clear();
		m_AZText->AppendText("-");
		m_staticText5->SetLabel("r");
		m_staticText53->SetLabel("-");
		m_staticText54->SetLabel("-");
		m_staticText51->SetLabel(wxT("ω"));
		m_staticText511->SetLabel(wxT("ω"));
		m_staticText512->SetLabel(wxT("ω"));
		m_staticText19->SetLabel("R");
		m_staticText18->SetLabel(wxT("θ"));
		m_staticText4->SetLabel(wxT("φ"));
	}
	Repaint();
}

void GUIMyFrame::DisplayPanelRepaint(wxUpdateUIEvent& event)
{
	static int i = 0;
	if (cfg->get_Animation())
	{
		i++;
		if (i % 4 == 0 && cfg->get_Points())
			Repaint();
		if (!cfg->get_Points())
			Repaint();
		if (i > 1000) i = 0;
	}
	else
		Repaint();
}

void GUIMyFrame::Repaint()
{
	wxClientDC dc1(m_DisplayWindow);
	wxBufferedDC dc(&dc1);

	ChartClass MyChart(cfg);
	int w, h;
	m_DisplayWindow->GetSize(&w, &h);
	MyChart.Draw(&dc, w, h);
}