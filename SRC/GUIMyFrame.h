#pragma once
#include "Window.h"
#include <wx/filedlg.h>
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/colourdata.h>
#include <wx/colordlg.h>
#include <memory>
class ConfigClass;

class GUIMyFrame : public MyFrame1
{
protected:
	// closes the window
	void MainFormClose(wxCloseEvent& event);
	// repaints mmain panel
	void DisplayPanelRepaint(wxUpdateUIEvent& event);

	// updates rotation
	void XRot_Updated(wxScrollEvent& event);
	void YRot_Updated(wxScrollEvent& event);
	void ZRot_Updated(wxScrollEvent& event);

	// updates amplitude
	void XA_Updated(wxCommandEvent& event);
	void YA_Updated(wxCommandEvent& event);
	void ZA_Updated(wxCommandEvent& event);

	// updates theta 
	void XTheta_Updated(wxCommandEvent& event);
	void YTheta_Updated(wxCommandEvent& event);
	void ZTheta_Updated(wxCommandEvent& event);

	// updates phi
	void XPhi_Updated(wxCommandEvent& event);
	void YPhi_Updated(wxCommandEvent& event);
	void ZPhi_Updated(wxCommandEvent& event);

	// dotes/lines switch
	void DotsLines_Updated(wxCommandEvent& event);
	void Animation_Updated(wxCommandEvent& event);
	void ParamType_Updated(wxCommandEvent& event);

public:
	GUIMyFrame(wxWindow* parent);
	// repaint method
	void Repaint();
	~GUIMyFrame();
	std::shared_ptr<ConfigClass> cfg;
	friend class ChartClass;
};