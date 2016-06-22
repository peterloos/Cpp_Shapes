#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

#include "Shape.h"

Sphere::Sphere (double x, double y, double z, double r)
    : ThreeDimensional ("Sphere", x, y, z)
{
    m_radius = r;
}

double Sphere::Volume () const
{
    return (4.0 / 3.0) * M_PI * m_radius * m_radius * m_radius;
}

double Sphere::Surface () const
{
    return 4 * M_PI * m_radius * m_radius;    
}

ostream& operator<< (ostream &os, const Sphere& s)
{
    os << (ThreeDimensional&) s << endl;
    os << fixed;
    os << "    Radius: " << setprecision(2) << s.m_radius << endl;
    os << "    Volume: " << setprecision(2) << s.Volume () << endl;
    os << "    Surface: " << setprecision(2) << s.Surface () << endl;
    return os;
}