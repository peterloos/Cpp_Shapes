#include "Shape.h"

void main ()
{
    Triangle tria (1, 1, 2, 3, 4);
    cout << tria << endl;

    Rectangle rect (10, 10, 20, 40);
    cout << rect << endl;

    Circle circle (20, 20, 10);
    cout << circle << endl;

    Cube cube (30, 30, 20, 10);
    cout << cube << endl;

    Cuboid cuboid (50, 50, 40, 10, 20, 30);
    cout << cuboid << endl;

    Sphere sphere (40, 40, 30, 15);
    cout << sphere << endl;

    Cone cone (60, 60, 50, 20, 30);
    cout << cone << endl;

	getchar();
}
