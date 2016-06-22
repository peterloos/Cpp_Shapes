#include <iomanip>
#include "Shape.h"

ThreeDimensional::ThreeDimensional (char* name, double x, double y, double z)
    : Shape (name)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

void ThreeDimensional::MoveTo (double x, double y, double z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

ostream& operator<< (ostream& os, const ThreeDimensional& td)
{
    os << (Shape&) td << endl;
    os << "  ThreeDimensional" << endl;
    os << "  Position: " << fixed << setprecision(2)
       << td.m_x << ", " << td.m_y << ", " << td.m_z;
    return os;
}
