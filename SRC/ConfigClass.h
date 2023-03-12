#pragma once
#pragma warning(disable: 4996) 
#include "GUIMyFrame.h"

class ConfigClass
{
protected:
	GUIMyFrame* MainWindow;
	double X_A, Y_A, Z_A;
	double X_theta, Y_theta, Z_theta;
	double X_phi, Y_phi, Z_phi;
	double X_Rot, Y_Rot, Z_Rot;
	double x, y, z;
	double R;
	bool animation;
	bool points;
	bool polar;

public:
	ConfigClass(GUIMyFrame* wnd);

	bool get_Points() { return points; }
	bool get_Animation() { return animation; }

	double getX_A() { return  X_A; };
	double getY_A() { return  Y_A; };
	double getZ_A() { return  Z_A; };

	double getX_theta() { return  X_theta; };
	double getY_theta() { return  Y_theta; };
	double getZ_theta() { return  Z_theta; };

	double getX_phi() { return  X_phi; };
	double getY_phi() { return  Y_phi; };
	double getZ_phi() { return  Z_phi; };

	double getX_Rot() { return  X_Rot; };
	double getY_Rot() { return  Y_Rot; };
	double getZ_Rot() { return  Z_Rot; };

	double getR() { return R; };

	bool get_Polar() { return  polar; };

	void Set_Points(bool a) { points = a; }
	void Set_Animation(bool a) { animation = a; }
	void Set_ParamType(bool a) { polar = a; }

	void SetX_Rot(int a) { X_Rot = a; }
	void SetY_Rot(int a) { Y_Rot = a; }
	void SetZ_Rot(int a) { Z_Rot = a; }

	void SetX_A(double a) { X_A = a; };
	void SetY_A(double a) { Y_A = a; };
	void SetZ_A(double a) { Z_A = a; };

	void SetX_theta(double theta) { X_theta = theta; };
	void SetY_theta(double theta) { Y_theta = theta; };
	void SetZ_theta(double theta) { Z_theta = theta; };

	void SetX_phi(double phi) { X_phi = phi; };
	void SetY_phi(double phi) { Y_phi = phi; };
	void SetZ_phi(double phi) { Z_phi = phi; };

	void SetR(double nR) { R = nR; };
	
};