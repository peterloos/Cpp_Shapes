#include <iomanip>
#include "Shape.h"

Triangle::Triangle (double x, double y, double a, double b, double c)
    : TwoDimensional ("Triangle", x, y)
{
    m_a = a;
    m_b = b;
    m_c = c;
}

double Triangle::Area () const
{
    return sqrt(((4 * m_a * m_a * m_c * m_c) -
        (m_a * m_a + m_c * m_c - m_b * m_b) *
        (m_a * m_a + m_c * m_c - m_b * m_b)) / 16.0);
}

double Triangle::Circumference () const
{
    return m_a + m_b + m_c;
}

ostream& operator<< (ostream &os, const Triangle& t)
{
    os << (TwoDimensional&) t << endl;
    os << fixed;
    os << "    A: " << setprecision(2) << t.m_a << endl;
    os << "    B: " << setprecision(2) << t.m_b << endl;
    os << "    C: " << setprecision(2) << t.m_c << endl;
    os << "    Area: " << setprecision(2) << t.Area () << endl;
    os << "    Circumference: " << setprecision(2) << t.Circumference () << endl;
    return os;
}

