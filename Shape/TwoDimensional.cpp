#include <iomanip>
#include "Shape.h"

TwoDimensional::TwoDimensional (char* name, double x, double y)
    : Shape (name)
{
    m_x = x;
    m_y = y;
}

void TwoDimensional::MoveTo (double x, double y)
{
    m_x = x;
    m_y = y;
}

ostream& operator<< (ostream& os, const TwoDimensional& td)
{
    os << (Shape&) td << endl;
    os << "  TwoDimensional" << endl;
    os << "  Position: " << fixed << setprecision(2) << td.m_x << ", " << td.m_y;
    return os;
}
