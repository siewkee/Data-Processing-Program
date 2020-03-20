#include "A03_Header.h"
#include "MyTemplates.h"

//Point2D & Point3D sorting methods
bool sort_point_x_ASC(Point2D lhs, Point2D rhs)
{
    return rhs.getX() > lhs.getX();
}

bool sort_point_x_DSC(Point2D lhs, Point2D rhs)
{
    return rhs.getX() < lhs.getX();
}

bool sort_point_y_ASC(Point2D lhs, Point2D rhs)
{
    return rhs.getY() > lhs.getY();
}

bool sort_point_y_DSC(Point2D lhs, Point2D rhs)
{
    return rhs.getY() < lhs.getY();
}

bool sort_point_DistFrOr_ASC(Point2D lhs, Point2D rhs)
{
    return rhs.getScalarValue() > lhs.getScalarValue();
}

bool sort_point_DistFrOr_DSC(Point2D lhs, Point2D rhs)
{
    return rhs.getScalarValue() < lhs.getScalarValue();
}

bool sort_point_z_ASC(Point3D lhs, Point3D rhs)
{
    return rhs.getZ() > lhs.getZ();
}

bool sort_point_z_DSC(Point3D lhs, Point3D rhs)
{
    return rhs.getZ() < lhs.getZ();
}

//Line2D & Line3D sorting methods
bool sort_line_pt1_ASC(Line2D lhs, Line2D rhs)
{
    return rhs.getPt1().getX() > lhs.getPt1().getX()
    || (rhs.getPt1().getX() == lhs.getPt1().getX() && rhs.getPt1().getY() > lhs.getPt1().getY());
}

bool sort_line_pt1_DSC(Line2D lhs, Line2D rhs)
{
    return rhs.getPt1().getX() < lhs.getPt1().getX()
    || (rhs.getPt1().getX() == lhs.getPt1().getX() && rhs.getPt1().getY() < lhs.getPt1().getY());
}

bool sort_line_pt2_ASC(Line2D lhs, Line2D rhs)
{
    return rhs.getPt2().getX() > lhs.getPt2().getX()
    || (rhs.getPt2().getX() == lhs.getPt2().getX() && rhs.getPt2().getY() > lhs.getPt2().getY());
}

bool sort_line_pt2_DSC(Line2D lhs, Line2D rhs)
{
    return rhs.getPt2().getX() < lhs.getPt2().getX()
    || (rhs.getPt2().getX() == lhs.getPt2().getX() && rhs.getPt2().getY() < lhs.getPt2().getY());
}

bool sort_line_length_ASC(Line2D lhs, Line2D rhs)
{
    return lhs.getScalarValue() < rhs.getScalarValue();
}

bool sort_line_length_DSC(Line2D lhs, Line2D rhs)
{
    return lhs.getScalarValue() > rhs.getScalarValue();
}

























