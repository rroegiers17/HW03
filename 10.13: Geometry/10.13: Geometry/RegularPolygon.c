
#include "RegularPolygon.h"


const double PI = 3.14159265;

//no-arg constructor
RegularPolygon::RegularPolygon()
{
    n =3;
    side = 1;
    x =0;
    y = 0;
}
//constructor that creates polygon with number of sides and length of side as the arguments
RegularPolygon::RegularPolygon (int n1, double s1)
{
    n = n1;
    side = s1;
    x = 0;
    y = 0;
}
// constructor that passes all arguments
RegularPolygon::RegularPolygon (int n1, double s1, double x1, double y1)
{
    n = n1;
    side = s1;
    x = x1;
    y = y1;
}
// set the number of sides
void RegularPolygone::setNumberOfSides (const int n1)
{
    n = n1;
}
// get the number of sides
int RegularPolygon::getNumberOfSides()const
{
    return n;
}
// set the side length
void RegularPolygon::setSideLength(const double s1)
{
    side = s1;
}
// get the side length
double RegularPolygon::getSideLength() const
{
    return side;
}
// set x-coordinate
void RegularPolygon::setCoordinateX(const double x1)
{
    x = x1;
}
// get x-coordinate
double RegularPolygon::getCoordinateX() const
{
    return x;
}
// set y-coordinate
void RegularPolygon::setCoordinateY( const double y1)
{
    y = y1;
}
// get y-coordinate
double RegularPolygon::getCoordinateY() const
{
    return y;
}
// calculate perimeter by number of sides by the side lengths
double RegularPolygon::getPerimeter() const
{
    return n*side;
}
// calculate area of the polygon by the formula given
double RegularPolygon::getArea() const
{
    double top = n * side * side;
    double tanfunct = tan(PI / n);
    double bottom = 4 * tanfunct;
    double area = top/bottom;
    
    return area;
}







