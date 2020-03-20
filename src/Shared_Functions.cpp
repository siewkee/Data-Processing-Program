#include "A03_Header.h"
#include "MyTemplates.h"

vector<Point2D> Points_2D;
vector<Line2D> Lines_2D;
vector<Point3D> Points_3D;
vector<Line3D> Lines_3D;

void display_menu(string filtering_c, string sorting_c, string sorting_or)
{
    cout << "\nStudent ID    : 5986606" << endl;
    cout << "Student Name    : Hung Siew Kee" << endl;
    cout << "-------------------------------" << endl;
    
    cout << "\nWelcome to Assn3 program!" << endl;
    
    cout << "\n1)\tRead in Data" << endl;
    cout << "2)\tSpecify filtering criteria (Current: " << filtering_c << ")" << endl;
    cout << "3)\tSpecify sorting criteria (Current: " << sorting_c << ")"  << endl;
    cout << "4)\tSpecify sorting criteria (Current: " << sorting_or << ")" << endl;
    cout << "5)\tView data" << endl;
    cout << "6)\tStore data" << endl;
    cout << "7)\tExit program" << endl;
}

//read data
//check for duplicates before storing
void choice_1()
{
    string fileName;
    cout << "Please enter filename: ";
    cin >> fileName;
    
    fstream inputFile(fileName.c_str(), fstream::in);
    
    if(!inputFile)
    {
        inputFile.close();
        cout << "Fail to open file for reading!" << endl;
        exit(-1);
    }
    
    string aLine;
    int num_ofRecords = 0;
    
    while(getline (inputFile, aLine))
    {
        num_ofRecords++;
        vector<string> tokenStringVector = tokenizeString (aLine, ", ");
        string obj_name = tokenStringVector[0];
        
        if (obj_name == "Point2D")
        {
            string obj_point_x = tokenStringVector[1];
            string obj_point_y = tokenStringVector[2];
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_x, "[");
            obj_point_x = tokenStringVector[1];
            int obj_point_x_int = stoi(obj_point_x);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_y, "]");
            obj_point_y = tokenStringVector[0];
            int obj_point_y_int = stoi(obj_point_y);
            
            Point2D point_2D(obj_point_x_int, obj_point_y_int);
            
            bool duplicate = check_Duplicate(point_2D, Points_2D);
            if (!duplicate)
                Points_2D.push_back(point_2D);
            
        }
        else if (obj_name == "Point3D")
        {
            string obj_point_x = tokenStringVector[1];
            string obj_point_y = tokenStringVector[2];
            string obj_point_z = tokenStringVector[3];
            int obj_point_y_int = stoi(obj_point_y);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_x, "[");
            obj_point_x = tokenStringVector[1];
            int obj_point_x_int = stoi(obj_point_x);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_z, "]");
            obj_point_z = tokenStringVector[0];
            int obj_point_z_int = stoi(obj_point_z);
            
            Point3D point_3D = Point3D(obj_point_x_int, obj_point_y_int, obj_point_z_int);
            
            bool duplicate = check_Duplicate(point_3D, Points_3D);
            if (!duplicate)
                Points_3D.push_back(point_3D);
            
        }
        else if (obj_name == "Line2D")
        {
            string obj_point_x = tokenStringVector[1];
            string obj_point_y = tokenStringVector[2];
            string obj_point_x2 = tokenStringVector[3];
            string obj_point_y2 = tokenStringVector[4];
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_x, "[");
            obj_point_x = tokenStringVector[1];
            int obj_point_x_int = stoi(obj_point_x);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_y, "]");
            obj_point_y = tokenStringVector[0];
            int obj_point_y_int = stoi(obj_point_y);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_x2, "[");
            obj_point_x2 = tokenStringVector[1];
            int obj_point_x2_int = stoi(obj_point_x2);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_y2, "]");
            obj_point_y2 = tokenStringVector[0];
            int obj_point_y2_int = stoi(obj_point_y2);
            
            Point2D point_2D_pt1(obj_point_x_int, obj_point_y_int);
            Point2D point_2D_pt2(obj_point_x2_int, obj_point_y2_int);
            
            Line2D line_2D(point_2D_pt1, point_2D_pt2);
            
            bool duplicate = check_Duplicate(line_2D, Lines_2D);
            if (!duplicate)
                Lines_2D.push_back(line_2D);
        }
        else if (obj_name == "Line3D")
        {
            string obj_point_x = tokenStringVector[1];
            string obj_point_y = tokenStringVector[2];
            string obj_point_z = tokenStringVector[3];
            int obj_point_y_int = stoi(obj_point_y);
            
            string obj_point_x2 = tokenStringVector[4];
            string obj_point_y2 = tokenStringVector[5];
            string obj_point_z2 = tokenStringVector[6];
            int obj_point_y2_int = stoi(obj_point_y2);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_x, "[");
            obj_point_x = tokenStringVector[1];
            int obj_point_x_int = stoi(obj_point_x);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_z, "]");
            obj_point_z = tokenStringVector[0];
            int obj_point_z_int = stoi(obj_point_z);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_x2, "[");
            obj_point_x2 = tokenStringVector[1];
            int obj_point_x2_int = stoi(obj_point_x2);
            
            tokenStringVector.clear();
            tokenStringVector = tokenizeString (obj_point_z2, "]");
            obj_point_z2 = tokenStringVector[0];
            int obj_point_z2_int = stoi(obj_point_z2);
            
            Point3D point_3D_pt1(obj_point_x_int, obj_point_y_int, obj_point_z_int);
            Point3D point_3D_pt2(obj_point_x2_int, obj_point_y2_int, obj_point_z2_int);
            
            Line3D line_3D(point_3D_pt1, point_3D_pt2);
            
            bool duplicate = check_Duplicate(line_3D, Lines_3D);
            if (!duplicate)
                Lines_3D.push_back(line_3D);
        }
    }
    
    cout << "\n" << num_ofRecords << " records read in successfully!" << endl;
    
    cout << "\nGoing back to main menu ..." << endl;
}

vector <string> tokenizeString(string input, string delimiter)
{
    size_t pos = 0;
    string token;
    vector <string> result;
    
    while ((pos = input.find(delimiter)) != string::npos)
    {
        token = input.substr(0, pos);
        result.push_back (token);
        input.erase(0, pos + delimiter.length());
    }
    
    result.push_back (input);
    
    return (result);
}

void choice_5(string filtering_c, string sorting_c, string sorting_or)
{
	 print_filter_cond(filtering_c, sorting_c, sorting_or);
    if (filtering_c == "Point2D")
    	cout << "\n" << point2D_table << endl;
    else if (filtering_c == "Point3D")
    	cout << "\n" << point3D_table << endl;
    else if (filtering_c == "Line2D")
    	cout << "\n" << line2D_table << endl;
    else if(filtering_c == "Line3D")
    	cout << "\n" << line3D_table << endl;
}

string choice_2(string filtering_c)
{
    cout << "\n[Specifying filtering criteria (current: " << filtering_c << ")]" << endl;
    
    string a = "Point2D";
    string b = "Point3D";
    string c = "Line2D";
    string d = "Line3D";
    
    cout << "\n\ta)\t" << a << " records" << endl;
    cout << "\tb)\t" << b << " records" << endl;
    cout << "\tc)\t" << c << " records" << endl;
    cout << "\td)\t" << d << " records" << endl;
    
    cout << "\nPlease enter your criteria(a - d): ";
    char criteria;
    cin >> criteria;
    
    if (criteria == 'a')
        return a;
    else if (criteria == 'b')
        return b;
    else if (criteria == 'c')
        return c;
    else
        return d;
}

string choice_3(string filtering_c, string sorting_c)
{
    string a_point = "x-ordinate ";
    string b_point = "y-ordinate";
    string c_point = "Dis. Fr Origin";
    string d_point = "z-ordinate";
    
    string a_line = "Pt. 1’s (x, y)";
    string b_line = "Pt. 2’s (x, y)";
    string c_line = "Length";
    
    cout << "\n[Specifying sorting criteria (current: " << sorting_c << ")]" << endl;
    
    if (filtering_c == "Point2D")
    {
        cout << "\n\ta)\t" << a_point << " value" << endl;
        cout << "\tb)\t" << b_point << " value" << endl;
        cout << "\tc)\t" << c_point << " value" << endl;
        
        cout << "\nPlease enter your criteria(a - c): ";
        char criteria;
        cin >> criteria;
        
        if (criteria == 'a')
        {
            cout << "\nStoring criteria successfully set to " << a_point << "!" << endl;
            return a_point;
        }
        else if (criteria == 'b')
        {
            cout << "\nStoring criteria successfully set to " << b_point << "!" << endl;
            return b_point;
        }
        else
        {
            cout << "\nStoring criteria successfully set to " << c_point << "!" << endl;
            return c_point;
        }
        
    }
    else if (filtering_c == "Point3D")
    {
        cout << "\n\ta)\t" << a_point << " value" << endl;
        cout << "\tb)\t" << b_point << " value" << endl;
        cout << "\tc)\t" << d_point << " value" << endl;
        cout << "\td)\t" << c_point << " value" << endl;
        
        cout << "\nPlease enter your criteria(a - d): ";
        char criteria;
        cin >> criteria;
        
        if (criteria == 'a')
        {
            cout << "\nStoring criteria successfully set to " << a_point << "!" << endl;
            return a_point;
        }
        else if (criteria == 'b')
        {
            cout << "\nStoring criteria successfully set to " << b_point << "!" << endl;
            return b_point;
        }
        else if (criteria == 'c')
        {
            cout << "\nStoring criteria successfully set to " << c_point << "!" << endl;
            return c_point;
        }
        else
        {
            cout << "\nStoring criteria successfully set to " << d_point << "!" << endl;
            return d_point;
        }
    }
    else
    {
        cout << "\n\ta)\t" << a_line << " value" << endl;
        cout << "\tb)\t" << b_line << " value" << endl;
        cout << "\tc)\t" << c_line << " value" << endl;
        
        cout << "\nPlease enter your criteria(a - c): ";
        char criteria;
        cin >> criteria;
        
        if (criteria == 'a')
        {
            cout << "\nStoring criteria successfully set to " << a_line << "!" << endl;
            return a_line;
        }
        else if (criteria == 'b')
        {
            cout << "\nStoring criteria successfully set to " << b_line << "!" << endl;
            return b_line;
        }
        else
        {
            cout << "\nStoring criteria successfully set to " << c_line << "!" << endl;
            return c_line;
        }
    }
}

string choice_4(string sorting_or)
{
    cout << "\n[Specifying sorting criteria (current: " << sorting_or << ")]" << endl;
    
    string a = "ASC";
    string b = "DSC";
    
    cout << "\n\ta)\t" << a << " order" << endl;
    cout << "\tb)\t" << b << " order" << endl;
    
    cout << "\nPlease enter your criteria(a - b): ";
    char criteria;
    cin >> criteria;
    
    if (criteria == 'a')
    {
        cout << "\nStoring criteria successfully set to " << a << "!" << endl;
        return a;
    }
    else
    {
        cout << "\nStoring criteria successfully set to " << b << "!" << endl;
        return b;
    }
}

void print_filter_cond(string filtering_c, string sorting_c, string sorting_or)
{
	cout << "\n[View data ...]"
		<< "\nfiltering criteria: " << filtering_c
		<< "\nsorting criteria: " << sorting_c
		<< "\nsorting order: " << sorting_or << endl;
}

void choice_6(string filtering_c, string sorting_c, string sorting_or)
{
	string fileName;
   cout << "\nPlease enter filename: ";
   cin >> fileName;
    
   fstream outputFile(fileName.c_str(), fstream::out);	
	
	
	if (outputFile.is_open())
	{
		outputFile << "\n[View data ...]"
			<< "\nfiltering criteria: " << filtering_c
			<< "\nsorting criteria: " << sorting_c
			<< "\nsorting order: " << sorting_or << endl;
		
		if (filtering_c == "Point2D")
		{
    		outputFile << "\n" << point2D_table << endl;
    		cout << Points_2D.size() << "records output successfully!" << endl;
    	}
		else if (filtering_c == "Point3D")
		{
		 	outputFile << "\n" << point3D_table << endl;
		 	cout << Points_3D.size() << "records output successfully!" << endl;
		}
		else if (filtering_c == "Line2D")
		{
		 	outputFile << "\n" << line2D_table << endl;
		 	cout << Lines_2D.size() << "records output successfully!" << endl;
		}
		else if(filtering_c == "Line3D")
		{
			outputFile << "\n" << line3D_table << endl;
			cout << "\n" << Lines_3D.size() << " records output successfully!" << endl;
		}
		
		outputFile.close();
	}
	else
 	{
 	 	outputFile.close();
    	cout << "Fail to open file for writing!" << endl;
    	exit(-1);
 	} 	  
}



















