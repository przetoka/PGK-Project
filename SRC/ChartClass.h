#pragma once
#include <memory>
#include "ConfigClass.h"
#include <wx/utils.h> 
#include <wx/timer.h>
#include <vector>

class ChartClass
{
private:
    std::shared_ptr<ConfigClass> cfg;

public:
    ChartClass(std::shared_ptr<ConfigClass> c);
    void Draw(wxDC* dc, int w, int h);
    wxTimer timer;
};

double min(const double a, const double b, const double c);