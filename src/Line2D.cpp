#include "A03_Header.h"

Line2D::Line2D() : pt1(), pt2()
{

}

Line2D::Line2D(Point2D pt1, Point2D pt2) : pt1(pt1), pt2(pt2)
{
    this->name = "Line2D";
    
    int x = this->pt1.getX();
    int y = this->pt1.getY();
    int x_2 = this->pt2.getX();
    int y_2 = this->pt2.getY();
    
    this->length = sqrt(pow((x - x_2), 2) + pow((y - y_2), 2));
}

Line2D::~Line2D()
{
    //empty
}

Point2D Line2D::getPt1()
{
    return this->pt1;
}

Point2D Line2D::getPt2()
{
    return this->pt2;
}

void Line2D::setPt1(Point2D pt1)
{
    this->pt1 = pt1;
}

void Line2D::setPt2(Point2D pt2)
{
    this->pt2 = pt2;
}

double Line2D::getScalarValue()
{
    return this->length;
}

void Line2D::setLength()
{
    int x = this->pt1.getX();
    int y = this->pt1.getY();
    int x_2 = this->pt2.getX();
    int y_2 = this->pt2.getY();
    
    this->length = sqrt(pow((x - x_2), 2) + pow((y - y_2), 2));
}

string Line2D::getName()
{
    return this->name;
}

bool Line2D::operator==(const Line2D& pt) const
{
    bool check_pt1 = false;
    bool check_pt2 = false;
    
    if (pt.pt1 == this->pt1)
        check_pt1 = true;
    
    if (pt.pt2 == this->pt2)
        check_pt2 = true;
    
    return check_pt1 && check_pt2;
}

ostream& operator<< (ostream& s, Line2D p)
{
	 s << showpoint << fixed << setprecision(3);
    s << "(["
    	<< p.getPt1().getX() << ", " 
    	<< p.getPt1().getY() << "], "
    	<< "disFrOrigin : " << p.getPt1().getScalarValue()
      << " to "
      << "["
    	<< p.getPt2().getX() << ", " 
    	<< p.getPt2().getY() << "], "
    	<< "disFrOrigin : " << p.getPt2().getScalarValue() << "), "
    	<< "length : " << p.getScalarValue();
      
    	
    	return s;
}






