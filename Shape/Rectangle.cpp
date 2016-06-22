#include <iomanip>
#include "Shape.h"

Rectangle::Rectangle (double x, double y, double width, double height)
    : TwoDimensional ("Rectangle", x, y)
{
    m_width = width;
    m_height = height;
}

double Rectangle::Area () const
{
    return m_width * m_height;
}

double Rectangle::Circumference () const
{
    return 2 * (m_width + m_height);
}

ostream& operator<< (ostream& os, const Rectangle& r)
{
    os << (TwoDimensional&) r << endl;
    os << fixed;
    os << "    Width: " << setprecision(2) << r.m_width << endl;
    os << "    Height: " << setprecision(2) << r.m_height << endl;
    os << "    Area: " << setprecision(2) << r.Area () << endl;
    os << "    Circumference: " << setprecision(2) << r.Circumference () << endl;
    return os;
}