#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

#include "Shape.h"

Cone::Cone (double x, double y, double z, double radius, double height)
    : ThreeDimensional ("Cone", x, y, z)
{
    m_radius = radius;
    m_height = height;
}

double Cone::Volume () const
{
    return (M_PI * m_radius * m_radius * m_height) / 3;
}

double Cone::Surface () const
{
    return M_PI * m_radius *
        (m_radius + sqrt (m_height * m_height + m_radius * m_radius));
}

ostream& operator<< (ostream &os, const Cone& c)
{
    os << (ThreeDimensional&) c << endl;
    os << fixed;
    os << "    Radius:  " << setprecision(2) << c.m_radius << endl;
    os << "    Height:  " << setprecision(2) << c.m_height << endl;
    os << "    Volume:  " << setprecision(2) << c.Volume () << endl;
    os << "    Surface: " << setprecision(2) << c.Surface () << endl;
    return os;
}