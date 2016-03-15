

#ifndef RegularPolygon_h
#define RegularPolygon_h

class RegularPolygon
{
private:
    int n; // defines the number of sides of the polygon
    double side; // stores the length of the side
    double x; // defines the x-coordinate of the center of the polygon
    double y; // defines the y-coordinate of the center of the polygon
    
public:
    RegularPolygon () // no-arg constructor that creates a regular polygon
    {
        n = 3;
        side = 1.0;
        x = 0;
        y = 0;
    }
    RegularPolygon(int num, int sidez) // constuctor that creates a regular polygon with specifide sides and lengths centered at (0,0)
    {
        n = num;
        side = sidez;
        
    }
    RegPoly(int )
};

#endif /* RegularPolygon_h */
