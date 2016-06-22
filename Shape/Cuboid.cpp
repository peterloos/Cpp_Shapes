#include <iomanip>
#include "Shape.h"

Cuboid::Cuboid (double x, double y, double z, double width, double height, double depth)
    : ThreeDimensional ("Cuboid", x, y, z)
{
    m_width = width;
    m_height = height;
    m_depth = depth;    
}

double Cuboid::Volume () const
{
    return m_width * m_height * m_depth;
}

double Cuboid::Surface () const
{
    return 2 * (m_width * m_height + m_height * m_depth + m_width * m_depth);
}

ostream& operator<< (ostream &os, const Cuboid& c)
{
    os << (ThreeDimensional&) c << endl;
    os << fixed;
    os << "    Width: " << setprecision(2) << c.m_width << endl;
    os << "    Height: " << setprecision(2) << c.m_height << endl;
    os << "    Depth: " << setprecision(2) << c.m_depth << endl;
    os << "    Volume: " << setprecision(2) << c.Volume () << endl;
    os << "    Surface: " << setprecision(2) << c.Surface () << endl;
    return os;
}