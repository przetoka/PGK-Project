#include <fstream>
#include "ConfigClass.h"

ConfigClass::ConfigClass(GUIMyFrame* wnd)
{
	MainWindow = wnd;
	X_A = Y_A = Z_A = 100;
	X_theta = 1;
	Y_theta = 1;
	Z_theta = 0;
	X_phi = Z_phi = 0;
	Y_phi = 3.1415 / 2;
	R = 100;
	
	points = false;
	animation = false;
	polar = false;
}