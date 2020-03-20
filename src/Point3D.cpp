#include "A03_Header.h"

Point3D::Point3D() : Point2D()
{
    
}


Point3D::Point3D(int x, int y, int z) : Point2D(x, y)
{
    this-> z = z;
    this->distFrOrigin = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    this->name = "Point3D";
}

Point3D::~Point3D()
{
    //empty
}

int Point3D::getZ()
{
    return this->z;
}

void Point3D::setZ(int z)
{
    this->z = z;
}

void Point3D::setDistFrOrigin()
{
    this->distFrOrigin = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

bool Point3D::operator==(const Point3D& pt) const
{
    if ((pt.x == this->x) && (pt.y == this->y) && (pt.z == this->z))
        return true;
    else
        return false;
}

ostream& operator<< (ostream& s, const Point3D& p)
{
    s << showpoint << fixed << setprecision(3);
    s << "["
    	<< p.x << ", " 
    	<< p.y << ", " 
    	<< p.z << "], "
    	<< "disFrOrigin : " << p.distFrOrigin;
    	
    	return s;
}

string Point3D::getName()
{
    return this->name;
}






