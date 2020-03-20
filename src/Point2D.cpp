#include "A03_Header.h"

Point2D::Point2D()
{

}

Point2D::Point2D(int x, int y)
{
    this-> x = x;
    this-> y = y;
    this->distFrOrigin = sqrt(pow(x, 2) + pow(y, 2));
    this->name = "Point2D";
}

Point2D::~Point2D()
{
    //empty
}

int Point2D::getX()
{
    return this->x;
}

int Point2D::getY()
{
    return this->y;
}

void Point2D::setX(int x)
{
    this->x = x;
}

void Point2D::setY(int y)
{
    this->y = y;
}

double Point2D::getScalarValue()
{
    return this->distFrOrigin;
}

void Point2D::setDistFrOrigin()
{
    this->distFrOrigin = sqrt(pow(x, 2) + pow(y, 2));
}

string Point2D::getName()
{
    return this->name;
}

bool Point2D::operator==(const Point2D& pt) const
{
    if ((pt.x == this->x) && (pt.y == this->y))
        return true;
    else
        return false;
}

ostream& operator<< (ostream& s, const Point2D& p)
{
	 s << showpoint << fixed << setprecision(3);
    s << "["
    	<< p.x << ", " 
    	<< p.y << "], "
    	<< "disFrOrigin : " << p.distFrOrigin;
    	
    	return s;
}






