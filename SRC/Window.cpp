///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Window.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style), m_timer(this, 1)
{
	SetTitle(_("Linie Lissajous - Natalia Przetocka, Karolina Klimek i Mateusz Lewandowski"));
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer(wxVERTICAL);

	m_DisplayWindow = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_DisplayWindow->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));

	bSizer30->Add(m_DisplayWindow, 5, wxALL | wxEXPAND, 5);

	bSizer2->Add(bSizer30, 30, wxEXPAND, 5);

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer(wxVERTICAL);

	m_staticText20 = new wxStaticText(this, wxID_ANY, wxT("Rotacja"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText20->Wrap(-1);
	m_staticText20->SetFont(wxFont(12, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer36->Add(m_staticText20, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	bSizer38->Add(bSizer36, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer(wxVERTICAL);

	m_staticText21 = new wxStaticText(this, wxID_ANY, wxT("Oś X"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText21->Wrap(-1);
	m_staticText21->SetFont(wxFont(12, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer40->Add(m_staticText21, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	bSizer33->Add(bSizer40, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer(wxVERTICAL);

	m_XRotationSlider = new wxSlider(this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxSize(-1, -1), wxSL_HORIZONTAL | wxSL_VALUE_LABEL);
	m_XRotationSlider->SetMaxSize(wxSize(300, -1));

	bSizer42->Add(m_XRotationSlider, 0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND, 5);

	bSizer33->Add(bSizer42, 0, wxEXPAND, 5);

	bSizer32->Add(bSizer33, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer(wxVERTICAL);

	m_staticText22 = new wxStaticText(this, wxID_ANY, wxT("Oś Y"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText22->Wrap(-1);
	m_staticText22->SetFont(wxFont(12, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer34->Add(m_staticText22, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_YRotationSlider = new wxSlider(this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL | wxSL_VALUE_LABEL);
	m_YRotationSlider->SetMaxSize(wxSize(300, -1));

	bSizer34->Add(m_YRotationSlider, 0, wxALIGN_CENTER_HORIZONTAL | wxALL | wxEXPAND, 5);

	bSizer32->Add(bSizer34, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer(wxVERTICAL);

	m_staticText23 = new wxStaticText(this, wxID_ANY, wxT("Oś Z"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText23->Wrap(-1);
	m_staticText23->SetFont(wxFont(12, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer35->Add(m_staticText23, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_ZRotationSlider = new wxSlider(this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL | wxSL_VALUE_LABEL);
	m_ZRotationSlider->SetMaxSize(wxSize(300, -1));

	bSizer35->Add(m_ZRotationSlider, 0, wxALIGN_CENTER_HORIZONTAL | wxALL | wxEXPAND, 5);

	bSizer32->Add(bSizer35, 1, wxEXPAND, 5);

	bSizer38->Add(bSizer32, 0, wxEXPAND, 5);

	bSizer37->Add(bSizer38, 3, wxEXPAND, 5);

	bSizer2->Add(bSizer37, 0, wxEXPAND, 5);

	bSizer1->Add(bSizer2, 7, wxALIGN_RIGHT | wxEXPAND, 5);

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer(wxVERTICAL);

	m_staticText17 = new wxStaticText(this, wxID_ANY, wxT("Parametry"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText17->Wrap(-1);
	m_staticText17->SetFont(wxFont(16, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer4->Add(m_staticText17, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* bSizer361;
	bSizer361 = new wxBoxSizer(wxVERTICAL);

	wxString ParamBoxChoices[] = { wxT("Kartezjańska"), wxT("Biegunowa") };
	int ParamBoxNChoices = sizeof(ParamBoxChoices) / sizeof(wxString);
	ParamBox = new wxRadioBox(this, wxID_ANY, wxT("Rodzaj parametryzacji"), wxDefaultPosition, wxDefaultSize, ParamBoxNChoices, ParamBoxChoices, 1, wxRA_SPECIFY_COLS);
	ParamBox->SetSelection(0);
	bSizer361->Add(ParamBox, 0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxALL, 5);


	bSizer4->Add(bSizer361, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer(wxVERTICAL);

	m_staticText19 = new wxStaticText(this, wxID_ANY, wxT("X"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText19->Wrap(-1);
	m_staticText19->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer9->Add(m_staticText19, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText5 = new wxStaticText(this, wxID_ANY, wxT("A"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText5->Wrap(-1);
	m_staticText5->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer10->Add(m_staticText5, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_AXText = new wxTextCtrl(this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize(-1, -1), 0);
	bSizer10->Add(m_AXText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer9->Add(bSizer10, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText51 = new wxStaticText(this, wxID_ANY, wxT("θ"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText51->Wrap(-1);
	m_staticText51->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer101->Add(m_staticText51, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_ThXText = new wxTextCtrl(this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer101->Add(m_ThXText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer9->Add(bSizer101, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText52 = new wxStaticText(this, wxID_ANY, wxT("φ"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText52->Wrap(-1);
	m_staticText52->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer102->Add(m_staticText52, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_PhiXText = new wxTextCtrl(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer102->Add(m_PhiXText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer9->Add(bSizer102, 0, wxEXPAND, 5);

	bSizer4->Add(bSizer9, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer(wxVERTICAL);

	m_staticText18 = new wxStaticText(this, wxID_ANY, wxT("Y"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText18->Wrap(-1);
	m_staticText18->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer91->Add(m_staticText18, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText53 = new wxStaticText(this, wxID_ANY, wxT("A"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText53->Wrap(-1);
	m_staticText53->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer103->Add(m_staticText53, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_AYText = new wxTextCtrl(this, wxID_ANY, wxT("100"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer103->Add(m_AYText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer91->Add(bSizer103, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer1011;
	bSizer1011 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText511 = new wxStaticText(this, wxID_ANY, wxT("θ"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText511->Wrap(-1);
	m_staticText511->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer1011->Add(m_staticText511, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_ThYText = new wxTextCtrl(this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer1011->Add(m_ThYText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer91->Add(bSizer1011, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer1021;
	bSizer1021 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText521 = new wxStaticText(this, wxID_ANY, wxT("φ"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText521->Wrap(-1);
	m_staticText521->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer1021->Add(m_staticText521, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_PhiYText = new wxTextCtrl(this, wxID_ANY, wxT("1.57"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer1021->Add(m_PhiYText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer91->Add(bSizer1021, 1, wxEXPAND, 5);

	bSizer4->Add(bSizer91, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer(wxVERTICAL);

	m_staticText4 = new wxStaticText(this, wxID_ANY, wxT("Z"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText4->Wrap(-1);
	m_staticText4->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer92->Add(m_staticText4, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* bSizer104;
	bSizer104 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText54 = new wxStaticText(this, wxID_ANY, wxT("A"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText54->Wrap(-1);
	m_staticText54->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer104->Add(m_staticText54, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_AZText = new wxTextCtrl(this, wxID_ANY, wxT("100"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer104->Add(m_AZText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer92->Add(bSizer104, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer1012;
	bSizer1012 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText512 = new wxStaticText(this, wxID_ANY, wxT("θ"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText512->Wrap(-1);
	m_staticText512->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer1012->Add(m_staticText512, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_ThZText = new wxTextCtrl(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer1012->Add(m_ThZText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer92->Add(bSizer1012, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer1022;
	bSizer1022 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText522 = new wxStaticText(this, wxID_ANY, wxT("φ"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText522->Wrap(-1);
	m_staticText522->SetFont(wxFont(14, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer1022->Add(m_staticText522, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_PhiZText = new wxTextCtrl(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer1022->Add(m_PhiZText, 5, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, 5);

	bSizer92->Add(bSizer1022, 1, wxEXPAND | wxALIGN_RIGHT, 5);

	bSizer4->Add(bSizer92, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer(wxVERTICAL);

	wxString animationBoxChoices[] = { wxT("Statyczna"), wxT("Animowana") };
	int animationBoxNChoices = sizeof(animationBoxChoices) / sizeof(wxString);
	animationBox = new wxRadioBox(this, wxID_ANY, wxT("Rodzaj animacji"), wxDefaultPosition, wxDefaultSize, animationBoxNChoices, animationBoxChoices, 1, wxRA_SPECIFY_COLS);
	animationBox->SetSelection(0);
	bSizer27->Add(animationBox, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	wxString m_radioBox1Choices[] = { wxT("Linie"), wxT("Punkty") };
	int m_radioBox1NChoices = sizeof(m_radioBox1Choices) / sizeof(wxString);
	m_radioBox1 = new wxRadioBox(this, wxID_ANY, wxT("Rodzaj rysowania"), wxDefaultPosition, wxDefaultSize, m_radioBox1NChoices, m_radioBox1Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBox1->SetSelection(0);
	m_radioBox1->SetFont(wxFont(10, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Cambria")));

	bSizer27->Add(m_radioBox1, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);

	bSizer4->Add(bSizer27, 1, wxEXPAND, 5);

	bSizer1->Add(bSizer4, 1, wxALIGN_LEFT | wxEXPAND, 5);

	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);

	//connect-y
	this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MyFrame1::MainFormClose));
	m_DisplayWindow->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame1::DisplayPanelRepaint), NULL, this);

	m_XRotationSlider->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);

	m_AXText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::XA_Updated), NULL, this);
	m_AYText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::YA_Updated), NULL, this);
	m_AZText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::ZA_Updated), NULL, this);

	m_ThXText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::XTheta_Updated), NULL, this);
	m_ThYText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::YTheta_Updated), NULL, this);
	m_ThZText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::ZTheta_Updated), NULL, this);

	m_PhiXText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::XPhi_Updated), NULL, this);
	m_PhiYText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::YPhi_Updated), NULL, this);
	m_PhiZText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::ZPhi_Updated), NULL, this);

	m_radioBox1->Connect(wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler(MyFrame1::DotsLines_Updated), NULL, this);
	animationBox->Connect(wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler(MyFrame1::Animation_Updated), NULL, this);
	ParamBox->Connect(wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler(MyFrame1::ParamType_Updated), NULL, this);

	m_timer.Start(20);
}

MyFrame1::~MyFrame1()
{
	//disconnect-y
	this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MyFrame1::MainFormClose));
	m_DisplayWindow->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame1::DisplayPanelRepaint), NULL, this);

	m_XRotationSlider->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);
	m_XRotationSlider->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::XRot_Updated), NULL, this);

	m_YRotationSlider->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);
	m_YRotationSlider->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::YRot_Updated), NULL, this);

	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);
	m_ZRotationSlider->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::ZRot_Updated), NULL, this);

	m_AXText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::XA_Updated), NULL, this);
	m_AYText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::YA_Updated), NULL, this);
	m_AZText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::ZA_Updated), NULL, this);

	m_ThXText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::XTheta_Updated), NULL, this);
	m_ThYText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::YTheta_Updated), NULL, this);
	m_ThZText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::ZTheta_Updated), NULL, this);

	m_PhiXText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::XPhi_Updated), NULL, this);
	m_PhiYText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::YPhi_Updated), NULL, this);
	m_PhiZText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MyFrame1::ZPhi_Updated), NULL, this);

	m_radioBox1->Disconnect(wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler(MyFrame1::DotsLines_Updated), NULL, this);
	animationBox->Disconnect(wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler(MyFrame1::Animation_Updated), NULL, this);
	ParamBox->Disconnect(wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler(MyFrame1::ParamType_Updated), NULL, this);
}