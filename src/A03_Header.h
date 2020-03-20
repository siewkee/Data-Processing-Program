#ifndef A03_Header
#define A03_Header

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <list>
#include "MyTemplates.h"

#include <utility>
#include <typeinfo>

using namespace std;

class Point2D
{
    friend ostream& operator<<(ostream&, const Point2D&);
    
	public:
		 Point2D();
		 Point2D(int x, int y);
		 ~Point2D();
		 
		 int getX();
		 int getY();
		 void setX(int x);
		 void setY(int y);
		 double getScalarValue();
		 virtual string getName();
		 
		 //operator overloading
		 bool operator==(const Point2D& pt) const;
		 
		 //testing purposes
		 //virtual void print();
		 
	protected:
		 int x;
		 int y;
		 double distFrOrigin;
		 virtual void setDistFrOrigin();
		 string name;
};

class Point3D : public Point2D
{
	friend ostream& operator<<(ostream&, const Point3D&);

	public:
		 Point3D();
		 Point3D(int x, int y, int z);
		 ~Point3D();
		 int getZ();
		 void setZ(int z);
		 string getName() override;
		 
		 //operator overloading
		 bool operator==(const Point3D& pt) const;
		 
		 //testing purposes
		 //void print() override;
		 
	protected:
		 int z;
		 void setDistFrOrigin() override;
		 string name;
		 
};

class Line2D
{
	friend ostream& operator<< (ostream& s, Line2D p);

	public:
		 Line2D();
		 Line2D(Point2D pt1, Point2D pt2);
		 ~Line2D();
		 
		 Point2D getPt1();
		 Point2D getPt2();
		 double getScalarValue();
		 void setPt1(Point2D pt1);
		 void setPt2(Point2D pt2);
		 virtual string getName();
		 
		 //operator overloading
		 bool operator==(const Line2D& pt) const;
		 
		 //testing purposes
		 //virtual void print();
		 
	protected:
		 double length;
		 virtual void setLength();
		 string name;
		 
	private:
		 Point2D pt1;
		 Point2D pt2;
};

class Line3D : public Line2D
{
	friend ostream& operator<< (ostream& s, Line3D p);

	public:
		 Line3D();
		 Line3D(Point3D pt1, Point3D pt2);
		 ~Line3D();
		 
		 Point3D getPt1();
		 Point3D getPt2();
		 void setPt1(Point3D pt1);
		 void setPt2(Point3D pt2);
		 string getName() override;
		 
		 //operator overloading
		 bool operator==(const Line3D& pt) const;
		 
		 //testing purposes
		 //void print() override;
		 
	protected:
		 void setLength() override;
		 string name;
		 
	private:
		 Point3D pt1;
		 Point3D pt2;
    
};

extern vector<Point2D> Points_2D;
extern vector<Line2D> Lines_2D;
extern vector<Point3D> Points_3D;
extern vector<Line3D> Lines_3D;

vector<string> tokenizeString(string, string);
void display_menu(string, string, string);
void choice_1();
string choice_2(string);
string choice_3(string, string);
string choice_4(string);
void choice_5(string, string, string);
void print_filter_cond(string, string, string);
void choice_6(string, string, string);
//function to delete all pointers in vector

//sorting methods
//Point2D & Point3D sorting methods
bool sort_point_x_ASC(Point2D, Point2D);
bool sort_point_x_DSC(Point2D, Point2D);
bool sort_point_y_ASC(Point2D, Point2D);
bool sort_point_y_DSC(Point2D, Point2D);
bool sort_point_DistFrOr_ASC(Point2D, Point2D);
bool sort_point_DistFrOr_DSC(Point2D, Point2D);
bool sort_point_z_ASC(Point3D, Point3D);
bool sort_point_z_DSC(Point3D, Point3D);

//Line2D sorting methods
bool sort_line_pt1_ASC(Line2D, Line2D);
bool sort_line_pt1_DSC(Line2D, Line2D);
bool sort_line_pt2_ASC(Line2D, Line2D);
bool sort_line_pt2_DSC(Line2D, Line2D);
bool sort_line_length_ASC(Line2D, Line2D);
bool sort_line_length_DSC(Line2D, Line2D);

//io manipulators
ostream& point2D_table(ostream&);
ostream& point3D_table(ostream&);
ostream& line2D_table(ostream&);
ostream& line3D_table(ostream&);

#endif






