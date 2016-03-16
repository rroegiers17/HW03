

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
    RegularPolygon(int n1, double s1, double x1, double y1);
    void setNumberOfSides (const int n1);
    int getNumberOfSides() const;
    void setSideLength (const double s1);
    double getSideLength() const;
    void setCoordinateX(const double x1);
    double getCoordinateX() const;
    void setCoordinateY(const double y1);
    double getCoordinateY() const;
    double getPerimeter() const;
    double getArea() const;
};

#endif /* RegularPolygon_h */
