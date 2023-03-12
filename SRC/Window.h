///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/textctrl.h>
#include <wx/radiobox.h>
#include <wx/frame.h>
#include <wx/timer.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	friend class GUIMyFrame;
protected:
	wxStaticText* m_staticText20;
	wxStaticText* m_staticText21;
	wxSlider* m_XRotationSlider;
	wxStaticText* m_staticText22;
	wxSlider* m_YRotationSlider;
	wxStaticText* m_staticText23;
	wxSlider* m_ZRotationSlider;
	wxStaticText* m_staticText17;
	wxRadioBox* ParamBox;
	wxStaticText* m_staticText19;
	wxStaticText* m_staticText5;
	wxTextCtrl* m_AXText;
	wxStaticText* m_staticText51;
	wxTextCtrl* m_ThXText;
	wxStaticText* m_staticText52;
	wxTextCtrl* m_PhiXText;
	wxStaticText* m_staticText18;
	wxStaticText* m_staticText53;
	wxTextCtrl* m_AYText;
	wxStaticText* m_staticText511;
	wxTextCtrl* m_ThYText;
	wxStaticText* m_staticText521;
	wxTextCtrl* m_PhiYText;
	wxStaticText* m_staticText4;
	wxStaticText* m_staticText54;
	wxTextCtrl* m_AZText;
	wxStaticText* m_staticText512;
	wxTextCtrl* m_ThZText;
	wxStaticText* m_staticText522;
	wxTextCtrl* m_PhiZText;
	wxRadioBox* animationBox;
	wxRadioBox* m_radioBox1;

	virtual void MainFormClose(wxCloseEvent& event) { event.Skip(); }
	virtual void DisplayPanelRepaint(wxUpdateUIEvent& event) { event.Skip(); }
	virtual void Scrolls_Updated(wxScrollEvent& event) { event.Skip(); }

	virtual void XRot_Updated(wxScrollEvent& event) { event.Skip(); }
	virtual void YRot_Updated(wxScrollEvent& event) { event.Skip(); }
	virtual void ZRot_Updated(wxScrollEvent& event) { event.Skip(); }

	virtual void XA_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void YA_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void ZA_Updated(wxCommandEvent& event) { event.Skip(); }

	virtual void XTheta_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void YTheta_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void ZTheta_Updated(wxCommandEvent& event) { event.Skip(); }

	virtual void XPhi_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void YPhi_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void ZPhi_Updated(wxCommandEvent& event) { event.Skip(); }

	virtual void DotsLines_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void Animation_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void AnimationBreak(wxCommandEvent& event) { event.Skip(); }
	virtual void ParamType_Updated(wxCommandEvent& event) { event.Skip(); }

	wxTimer m_timer;

public:
	wxPanel* m_DisplayWindow;
	MyFrame1(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1055, 612), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~MyFrame1();
};