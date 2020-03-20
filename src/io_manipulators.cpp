#include "A03_Header.h"
#include "MyTemplates.h"

//print data in table format
ostream& point2D_table(ostream& s)
{
    s.setf(ios_base::right, ios_base::adjustfield);
    s.width(5);
    s << "X";
    s.width(5);
    s << "Y";
    s.width(5);
    s << " ";
    s.width(20);
    s.setf(ios_base::left, ios_base::adjustfield);
    s << "Dist. Fr Orgin" ;
    s.width(30);
    s << setfill('-') << "\n-" << endl;
    s << setfill(' ');
    
    for (Point2D p : Points_2D)
    {
		 s << "[";
		 s.setf(ios_base::right, ios_base::adjustfield);
		 s.width(4);
		 s << p.getX();
		 s.width(2);
		 s << ", ";
		 s.width(4);
		 s << p.getY();
		 s.setf(ios_base::left, ios_base::adjustfield);
		 s.width(4);
		 s << "]";
		 s.width(20);
		 s << showpoint << fixed << setprecision(3);
		 s << p.getScalarValue() << endl;
    }
    
    return s;
}


ostream& point3D_table(ostream& s)
{
    s.setf(ios_base::right, ios_base::adjustfield);
    s.width(5);
    s << "X";
    s.width(6);
    s << "Y";
    s.width(6);
    s << "Z";
    s.width(4);
    s << " ";
    s.width(20);
    s.setf(ios_base::left, ios_base::adjustfield);
    s << "Dist. Fr Orgin" ;
    s.width(30);
    s << setfill('-') << "\n-" << endl;
    s << setfill(' ');
    
    for (Point3D p : Points_3D)
    {
		 s << "[";
		 s.setf(ios_base::right, ios_base::adjustfield);
		 s.width(4);
		 s << p.getX();
		 s.width(2);
		 s << ", ";
		 s.width(4);
		 s << p.getY();
		 s.width(2);
		 s << ", ";
		 s.width(4);
		 s << p.getZ();
		 s.setf(ios_base::left, ios_base::adjustfield);
		 s.width(4);
		 s << "]";
		 s.width(20);
		 s << showpoint << fixed << setprecision(3);
		 s << p.getScalarValue() << endl;
    }
    
    return s;
}
 
ostream& line2D_table(ostream& s)
{
    s.setf(ios_base::right, ios_base::adjustfield);
    s.width(5);
    s << "P1-X";
    s.width(6);
    s << "P1-Y";
    s.width(4);
    s << " ";
    s.width(5);
    s << "P2-X";
    s.width(6);
    s << "P2-Y";
    s.width(4);
    s << " ";
    s.width(20);
    s.setf(ios_base::left, ios_base::adjustfield);
    s << "Length" ;
    s.width(40);
    s << setfill('-') << "\n-" << endl;
    s << setfill(' ');
    
    for (Line2D p : Lines_2D)
    {
    	  s << "[";
        
        s.setf(ios_base::right, ios_base::adjustfield);
        s.width(4);
        s << p.getPt1().getX();
        
        s.width(2);
        s << ", ";
        
        s.width(4);
        s << p.getPt1().getY();
        
        s.width(4);
        s << "]   ";
        
        s.width(1);
        s << "[";
        
        s.width(4);
        s << p.getPt2().getX();
        
        s.width(2);
        s << ", ";
        
        s.width(4);
        s << p.getPt2().getY();
        
        s.setf(ios_base::left, ios_base::adjustfield);
        s.width(4);
        s << "]";
        
        s.width(20);
        s << showpoint << fixed << setprecision(3);
        s << p.getScalarValue() << endl;
        
    }
    
    return s;
}
 
ostream& line3D_table (ostream& s)
{
    s.setf(ios_base::right, ios_base::adjustfield);
    s.width(5);
    s << "P1-X";
    s.width(6);
    s << "P1-Y";
    s.width(6);
    s << "P1-Z";
    s.width(4);
    s << " ";
    s.width(6);
    s << "P2-X";
    s.width(6);
    s << "P2-Y";
    s.width(6);
    s << "P2-Z";
    s.width(4);
    s << " ";
    s.width(20);
    s.setf(ios_base::left, ios_base::adjustfield);
    s << "Length" ;
    s.width(51);
    s << setfill('-') << "\n-" << endl;
    s << setfill(' ');
    
    for (Line3D p : Lines_3D)
    {
    	s << "[";
        
        s.setf(ios_base::right, ios_base::adjustfield);
        s.width(4);
        s << p.getPt1().getX();
        
        s.width(2);
        s << ", ";
        
        s.width(4);
        s << p.getPt1().getY();
        
        s.width(2);
        s << ", ";
        
        s.width(4);
        s << p.getPt1().getZ();
        
        s.width(5);
        s << "]    ";
        
        s.width(1);
        s << "[";
        
        s.width(4);
        s << p.getPt2().getX();
        
        s.width(2);
        s << ", ";
        
        s.width(4);
        s << p.getPt2().getY();
        
        s.width(2);
        s << ", ";
        
        s.width(4);
        s << p.getPt2().getZ();
        
        s.setf(ios_base::left, ios_base::adjustfield);
        s.width(4);
        s << "]";
        
        s.width(20);
        s << showpoint << fixed << setprecision(3);
        s << p.getScalarValue() << endl;
        
    }
    
    return s;
}



