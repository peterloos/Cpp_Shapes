#include <iomanip>
#include "Shape.h"

Cube::Cube (double x, double y, double z, double size)
    : ThreeDimensional ("Cube", x, y, z)
{
    m_size = size;
}

double Cube::Volume () const
{
    return m_size * m_size * m_size;
}

double Cube::Surface () const
{
    return 6 * m_size * m_size;
}

ostream& operator<< (ostream &os, const Cube& c)
{
    os << (ThreeDimensional&) c << endl;
    os << fixed;
    os << "    Size: " << setprecision(2) << c.m_size << endl;
    os << "    Volume: " << setprecision(2) << c.Volume () << endl;
    os << "    Surface: " << setprecision(2) << c.Surface () << endl;
    return os;
}