#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double m_x, m_y, m_z;
 
public:
    Point(double x=0.0, double y=0.0, double z=0.0):
        m_x(x), m_y(y), m_z(z)
    {
    }
 
    // Convert a Point into its negative equivalent
    Point operator- () const;
    Point operator+ () const;
 
    // Return true if the point is set at the origin
    bool operator! () const;
 
    double getX() { return m_x; }
    double getY() { return m_y; }
    double getZ() { return m_z; }
};


#endif