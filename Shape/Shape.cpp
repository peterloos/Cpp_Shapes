#include <string.h>
#include "Shape.h"

Shape::Shape (char* name)
{
    int len = strlen (name);
    m_name = new char [len + 1];
    strncpy_s (m_name, len + 1, name, len + 1);
}

Shape::~Shape ()
{
    delete[] m_name;
}

ostream& operator<< (ostream& os, const Shape& s)
{
    os << "Shape: " << s.m_name;
    return os;
}
