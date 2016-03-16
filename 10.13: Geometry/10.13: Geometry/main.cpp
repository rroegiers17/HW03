//
//  Rachel Roegiers
//  CS 172-1
//  HW03
//  10.13: Geometry of n-sided regular polygon
//

#include <iostream>
#include "RegularPolygon.h"
using namespace std;

int main()
{
    RegularPolygon polygon1; // first polygon using the no argument constructor
    cout << "The no-arg constructor of a regular polygon."<< endl;
    cout << "Perimeter: "<< polygon1.getPerimeter()<< endl;
    cout << "Area: " << polygon1.getArea()<< endl;
    
    // second polygon that specifies the number of sides and the side length
    RegularPolygon polygon2(6,4);
    cout << "Polygon with 6 sides and a length of 4." << endl;
    cout << "Perimeter: " << polygon2.getPerimeter()<< endl;
    cout << "Area: " << polygon2.getArea() << endl;
    
    // third polygon that specifies number of sides, side length, and x and y coordinates.
    RegularPolygon polygon3(10, 4, 5.6, 7.8);
    cout << "Polygon of 10 sides with length four and centered at (5.6,7.8)" << endl;
    cout << "Perimeter: " << polygon3.getPerimeter()<< endl;
    cout << "Area: " << polygon3.getArea() << endl;
    
    return 0;
    
}