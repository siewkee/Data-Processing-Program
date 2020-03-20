#include "A03_Header.h"

Line3D::Line3D() : pt1(), pt2(), Line2D()
{
 
}

Line3D::Line3D(Point3D pt1, Point3D pt2) : pt1(pt1), pt2(pt2), Line2D(pt1, pt2)
{
    this->name = "Line3D";
    
    int x = this->pt1.getX();
    int y = this->pt1.getY();
    int z = this->pt1.getZ();
    int x_2 = this->pt2.getX();
    int y_2 = this->pt2.getY();
    int z_2 = this->pt2.getZ();
    
    this->length = sqrt(pow((x - x_2), 2) + pow((y - y_2), 2) + pow((z - z_2), 2));
    
}

Line3D::~Line3D()
{
    //empty
}

Point3D Line3D::getPt1()
{
    return this->pt1;
}

Point3D Line3D::getPt2()
{
    return this->pt2;
}

void Line3D::setPt1(Point3D pt1)
{
    this->pt1 = pt1;
}

void Line3D::setPt2(Point3D pt2)
{
    this->pt2 = pt2;
}

void Line3D::setLength()
{
    int x = this->pt1.getX();
    int y = this->pt1.getY();
    int z = this->pt1.getZ();
    int x_2 = this->pt2.getX();
    int y_2 = this->pt2.getY();
    int z_2 = this->pt2.getZ();
    
    this->length = sqrt(pow((x - x_2), 2) + pow((y - y_2), 2) + pow((z - z_2), 2));
}

string Line3D::getName()
{
    return this->name;
}

bool Line3D::operator==(const Line3D& pt) const
{
    bool check_pt1 = false;
    bool check_pt2 = false;
    
    if (pt.pt1 == this->pt1)
        check_pt1 = true;
    
    if (pt.pt2 == this->pt2)
        check_pt2 = true;
    
    return check_pt1 && check_pt2;
}

ostream& operator<< (ostream& s, Line3D p)
{
	 s << showpoint << fixed << setprecision(3);
    s << "(["
    	<< p.getPt1().getX() << ", " 
    	<< p.getPt1().getY() << ", " 
    	<< p.getPt1().getZ() << "], "
    	<< "disFrOrigin : " << p.getPt1().getScalarValue()
      << " to "
      << "["
    	<< p.getPt2().getX() << ", " 
    	<< p.getPt2().getZ() << ", " 
    	<< p.getPt2().getY() << "], "
    	<< "disFrOrigin : " << p.getPt2().getScalarValue() << "), "
    	<< "length : " << p.getScalarValue();
      
    	
    	return s;        
}
        


