#include <iostream>
using namespace std;

class Shape
{
private:
    char* m_name;

protected:
    // c'tor / d'tor
    Shape (char* name);

public:
    virtual ~Shape() = 0;

    // output
    friend ostream& operator<< (ostream&, const Shape&);
};

class TwoDimensional : public Shape
{
protected:
    double m_x;
    double m_y;

public:
    // c'tor
    TwoDimensional (char* name, double x, double y);

    // public interface
    void MoveTo (double x, double y);

    // contract for derived classes
    virtual double Area () const = 0;
    virtual double Circumference () const = 0; 

    // output
    friend ostream& operator<< (ostream&, const TwoDimensional&);
};

class ThreeDimensional : public Shape
{
protected:
    double m_x;
    double m_y;
    double m_z;

public:
    // c'tor
    ThreeDimensional (char* name, double x, double y, double z);

    // public interface
    void MoveTo (double x, double y, double z);

    // contract for derived classes
    virtual double Volume () const = 0;
    virtual double Surface () const = 0;

    // output
    friend ostream& operator<< (ostream&, const ThreeDimensional&);
};

class Triangle : public TwoDimensional
{
protected:
    double m_a;
    double m_b;
    double m_c;

public:
    Triangle (double x, double y, double a, double b, double c);

    double Area () const;
    double Circumference () const;
    
    // output
    friend ostream& operator<< (ostream&, const Triangle&);
};

class Rectangle : public TwoDimensional
{
protected:
    double m_width;
    double m_height;

public:
    Rectangle (double x, double y, double width, double height);

    double Area () const;
    double Circumference () const;
    
    // output
    friend ostream& operator<< (ostream&, const Rectangle&);
};

class Circle : public TwoDimensional
{
protected:
    double  m_radius;

public:
    Circle (double x, double y, double r);

    double Area () const;
    double Circumference () const;
    
    // output
    friend ostream& operator<< (ostream&, const Circle&);
};

class Cube : public ThreeDimensional
{
protected:
    double m_size;

public:
    Cube (double x, double y, double z, double size);

    double Volume () const;
    double Surface () const;

    // output
    friend ostream& operator<< (ostream&, const Cube&);
};

class Cuboid : public ThreeDimensional
{
protected:
    double m_width;
    double m_height;
    double m_depth;

public:
    Cuboid (double x, double y, double z,
        double width, double height, double depth);

    double Volume () const;
    double Surface () const;

    // output
    friend ostream& operator<< (ostream&, const Cuboid&);
};

class Sphere : public ThreeDimensional
{
protected:
    double m_radius;

public:
    Sphere (double x, double y, double z, double radius);

    double Volume () const;
    double Surface () const;

    // output
    friend ostream& operator<< (ostream&, const Sphere&);
};

class Cone : public ThreeDimensional
{
protected:
    double m_radius;
    double m_height;

public:
    Cone (double x, double y, double z, double radius, double height);

    double Volume () const;
    double Surface () const;

    // output
    friend ostream& operator<< (ostream&, const Cone&);
};
