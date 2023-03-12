#include "ChartClass.h"
#include "vecmat.h"
#include <memory>
#include <vector>
#include <wx/timer.h>

ChartClass::ChartClass(std::shared_ptr<ConfigClass> c)
{
    cfg = std::move(c);
}

void ChartClass::Draw(wxDC* dc, int w, int h)
{
    dc->SetBackground(wxBrush(wxColor(255, 255, 255)));
    dc->Clear();
    Vector4 vector1;
    Vector4 vector2;
    double r1, r2, phi1, phi2, th1, th2;

    Matrix4 m2;
    double alpha = cfg->getZ_Rot() * M_PI / 180.0;
    m2.data[0][0] = cos(alpha);
    m2.data[0][1] = sin(alpha);
    m2.data[1][0] = -sin(alpha);
    m2.data[1][1] = cos(alpha);
    m2.data[2][2] = 1;

    Matrix4 m3;
    alpha = cfg->getY_Rot() * M_PI / 180.0;
    m3.data[0][0] = cos(alpha);
    m3.data[0][2] = -sin(alpha);
    m3.data[1][1] = 1;
    m3.data[2][0] = sin(alpha);
    m3.data[2][2] = cos(alpha);

    Matrix4 m4;
    alpha = cfg->getX_Rot() * M_PI / 180.0;
    m4.data[0][0] = 1;
    m4.data[1][1] = cos(alpha);
    m4.data[1][2] = sin(alpha);
    m4.data[2][1] = -sin(alpha);
    m4.data[2][2] = cos(alpha);

    Matrix4 transform1 = m4 * m3 * m2;
    double minTheta = min(cfg->getX_theta() ,cfg->getY_theta(), cfg->getZ_theta());
    // drawing
    wxPen m_pen;
    m_pen.SetColour((wxColor(200, 200, 200)));
    dc->SetPen(m_pen);
    if (!cfg->get_Animation())
    {
        for (double i = 0; i < ((50 * 3.14159) / minTheta); i += ((2 * 3.14159) / (minTheta * 200)))
        {
            if(!cfg->get_Polar()){
                vector1.data[0] = cfg->getX_A() * sin(cfg->getX_theta() * i + cfg->getX_phi());
                vector1.data[1] = cfg->getY_A() * sin(cfg->getY_theta() * i + cfg->getY_phi());
                vector1.data[2] = cfg->getZ_A() * sin(cfg->getZ_theta() * i + cfg->getZ_phi());
                vector1.data[3] = 1;
                vector1 = transform1 * vector1;

                vector2.data[0] = cfg->getX_A() * sin(cfg->getX_theta() * (i + ((2 * 3.14159) / (minTheta * 200))) + cfg->getX_phi());
                vector2.data[1] = cfg->getY_A() * sin(cfg->getY_theta() * (i + ((2 * 3.14159) / (minTheta * 200))) + cfg->getY_phi());
                vector2.data[2] = cfg->getZ_A() * sin(cfg->getZ_theta() * (i + ((2 * 3.14159) / (minTheta * 200))) + cfg->getZ_phi());
                vector2.data[3] = 1;
                vector2 = transform1 * vector2;
            }
            else {
                r1 = cfg->getR() * sin(cfg->getX_theta() * i + cfg->getX_phi());
                th1 = M_PI * sin(cfg->getY_theta() * i + cfg->getY_phi());
                phi1 = (M_PI/2) * sin(cfg->getZ_theta() * i + cfg->getZ_phi());

                vector1.data[0] = r1 * cos(th1) * cos(phi1);
                vector1.data[1] = r1 * sin(th1) * cos(phi1);
                vector1.data[2] = r1 * sin(phi1);
                vector2.data[3] = 1;
                vector1 = transform1 * vector1;

                r2 = cfg->getR() * sin(cfg->getX_theta() * (i + ((2 * 3.14159) / (minTheta * 200))) + cfg->getX_phi());
                th2 = M_PI * sin(cfg->getY_theta() * (i + ((2 * 3.14159) / (minTheta * 200))) + cfg->getY_phi());
                phi2 = (M_PI / 2) * sin(cfg->getZ_theta() * (i + ((2 * 3.14159) / (minTheta * 200))) + cfg->getZ_phi());

                vector2.data[0] = r2 * cos(th2) * cos(phi2);
                vector2.data[1] = r2 * sin(th2) * cos(phi2);
                vector2.data[2] = r2 * sin(phi2);
                vector2.data[3] = 1;
                vector2 = transform1 * vector2;
            }

            dc->SetPen(wxPen(*wxBLACK, 2));
            if (cfg->get_Points() == true)
                dc->DrawCircle(wxPoint(w / 2 + vector1.data[0], h / 2 + vector1.data[1]), 1);
            else
                dc->DrawLine(wxPoint(w / 2 + vector1.data[0], h / 2 + vector1.data[1]), wxPoint(w / 2 + vector2.data[0], h / 2 + vector2.data[1]));
        }
    }
    else
    {
        static long long int startPoint = 0;
        std::vector<std::vector<double>> animationPoints;
        std::vector<double> t;
        if (!cfg->get_Polar())
            for (double i = 0; i < ((50 * 3.14159) / minTheta); i += ((2 * 3.14159) / (minTheta * 200)))
            {
                vector1.data[0] = cfg->getX_A() * sin(cfg->getX_theta() * i + cfg->getX_phi());
                vector1.data[1] = cfg->getY_A() * sin(cfg->getY_theta() * i + cfg->getY_phi());
                vector1.data[2] = cfg->getZ_A() * sin(cfg->getZ_theta() * i + cfg->getZ_phi());
                vector1.data[3] = 1;
                vector1 = transform1 * vector1;
                t.push_back(vector1.data[0]);
                t.push_back(vector1.data[1]);
                animationPoints.push_back(t);
                t.clear();
            }
        else
            for (double i = 0; i < ((50 * 3.14159) / minTheta); i += ((2 * 3.14159) / (minTheta * 200)))
            {
                r1 = cfg->getR() * sin(cfg->getX_theta() * i + cfg->getX_phi());
                th1 = M_PI * sin(cfg->getY_theta() * i + cfg->getY_phi());
                phi1 = (M_PI / 2) * sin(cfg->getZ_theta() * i + cfg->getZ_phi());

                vector1.data[0] = r1 * cos(th1) * cos(phi1);
                vector1.data[1] = r1 * sin(th1) * cos(phi1);
                vector1.data[2] = r1 * sin(phi1);
                vector2.data[3] = 1;
                vector1 = transform1 * vector1;
                t.push_back(vector1.data[0]);
                t.push_back(vector1.data[1]);
                animationPoints.push_back(t);
                t.clear();
            }
        for (int i = 0; i < animationPoints.size()-1; i++)
        {
            dc->DrawLine(wxPoint(w / 2 + animationPoints[i][0], h / 2 + animationPoints[i][1]), wxPoint(w / 2 + animationPoints[(i + 1) % animationPoints.size()][0], h / 2 + animationPoints[(i + 1) % animationPoints.size()][1]));
        }

        for (int i = startPoint; i < startPoint + 150;)
        {
            i %= animationPoints.size();
            dc->SetPen(wxPen(wxColor(255 * (i - startPoint) / 150, 0, 255 * (150 - i + startPoint) / 150), 2));
            if (cfg->get_Points() == true)
            {
                dc->DrawCircle(wxPoint(w / 2 + animationPoints[i][0], h / 2 + animationPoints[i][1]), 1);
                i += 4;
            }
            else
            {
                dc->DrawLine(wxPoint(w / 2 + animationPoints[i][0], h / 2 + animationPoints[i][1]), wxPoint(w / 2 + animationPoints[(i + 1) % animationPoints.size()][0], h / 2 + animationPoints[(i + 1) % animationPoints.size()][1]));
                i++;
            }
            if (i == animationPoints.size() - 1) i = 0;
        }
        if (cfg->get_Points()) startPoint += 4;
        else startPoint++;
        if (startPoint >= 1.e8) startPoint = 0;
    }
}

double min(const double a, const double b, const double c)
{
    double min = a;
    if (b < min && b != 0) min = b;
    if (c < min && c != 0) min = c;
    return min;
}