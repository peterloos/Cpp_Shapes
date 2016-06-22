#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

#include "Shape.h"

Circle::Circle (double x, double y, double r)
    : TwoDimensional ("Circle", x, y)
{
    m_radius = r;
}

double Circle::Area () const
{
    return m_radius * m_radius * M_PI;
}

double Circle::Circumference () const
{
    return 2 * M_PI * m_radius;
}

ostream& operator<< (ostream &os, const Circle& c)
{
    os << (TwoDimensional&) c << endl;
    os << fixed;
    os << "    Radius: " << setprecision(2) << c.m_radius << endl;
    os << "    Area: " << setprecision(2) << c.Area () << endl;
    os << "    Circumference: " << setprecision(2) << c.Circumference () << endl;
    return os;
}
