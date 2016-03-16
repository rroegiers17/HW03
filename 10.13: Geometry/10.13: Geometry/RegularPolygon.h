

#ifndef RegularPolygon_h
#define RegularPolygon_h

class RegularPolygon {
private:
    int n; // defines the number of sides of the polygon
    double side; // stores the length of the side
    double x; // defines the x-coordinate of the center of the polygon
    double y; // defines the y-coordinate of the center of the polygon
    
public:
    RegularPolygon(); // no-arg constructor that creates a regular polygon
    RegularPolygon(int n1, double s1); // constuctor that creates a regular polygon with specifide sides and lengths centered at (0,0)
    RegularPolygon(int n1, double s1, double x1, double y1); //constructor passing in all arguments
    void setNumberOfSides (const int n1); // setting the number of side
    int getNumberOfSides() const; // gets number of sides
    void setSideLength (const double s1); // sets length of sides
    double getSideLength() const; // gets length of sides
    void setCoordinateX(const double x1); // sets x-coordinate
    double getCoordinateX() const; // gets x-coordinate
    void setCoordinateY(const double y1); // sets y-coordinate
    double getCoordinateY() const; // gets y-coordinate
    double getPerimeter() const; // gets perimeter
    double getArea() const; // gets area
};

#endif /* RegularPolygon_h */
