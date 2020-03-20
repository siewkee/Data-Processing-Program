#include "A03_Header.h"

int main()
{
    int choice = 0;
    string filtering_c = "Point2D";
    string sorting_c = "x-ordinate";
    string sorting_or = "ASC";
    
    while(choice < 7)
    {
        display_menu(filtering_c, sorting_c, sorting_or);
        
        cout << "\nPlease enter your choice: ";
        cin >> choice;
        
        if (choice == 1)
            choice_1();
        else if (choice == 2)
        {
            filtering_c = choice_2(filtering_c);
            if ((filtering_c == "Line2D") | (filtering_c == "Line3D"))
                sorting_c = "Pt. 1’s (x, y)";
            else
                sorting_c = "x-ordinate";
        }
        else if (choice == 3)
            sorting_c = choice_3(filtering_c, sorting_c);
        else if(choice == 4)
            sorting_or = choice_4(sorting_or);
        else if(choice == 5)
        {
            if (filtering_c == "Point2D")
            {
                if (sorting_c == "x-ordinate")
                {
                    if (sorting_or == "ASC")
                        sort(Points_2D.begin(), Points_2D.end(), sort_point_x_ASC);
                    else
                        sort(Points_2D.begin(), Points_2D.end(), sort_point_x_DSC);
                }
                else if (sorting_c == "y-ordinate")
                {
                    if (sorting_or == "ASC")
                        sort(Points_2D.begin(), Points_2D.end(), sort_point_y_ASC);
                    else
                        sort(Points_2D.begin(), Points_2D.end(), sort_point_y_DSC);
                }
                else
                {
                    if (sorting_or == "ASC")
                        sort(Points_2D.begin(), Points_2D.end(), sort_point_DistFrOr_ASC);
                    else
                        sort(Points_2D.begin(), Points_2D.end(), sort_point_DistFrOr_DSC);
                }
            }
            else if (filtering_c == "Point3D")
            {
                if (sorting_c == "x-ordinate")
                {
                    if (sorting_or == "ASC")
                        sort(Points_3D.begin(), Points_3D.end(), sort_point_x_ASC);
                    else
                        sort(Points_3D.begin(), Points_3D.end(), sort_point_x_DSC);
                }
                else if (sorting_c == "y-ordinate")
                {
                    if (sorting_or == "ASC")
                        sort(Points_3D.begin(), Points_3D.end(), sort_point_y_ASC);
                    else
                        sort(Points_3D.begin(), Points_3D.end(), sort_point_y_DSC);
                }
                else if (sorting_c == "z-ordinate")
                {
                    if (sorting_or == "ASC")
                        sort(Points_3D.begin(), Points_3D.end(), sort_point_z_ASC);
                    else
                        sort(Points_3D.begin(), Points_3D.end(), sort_point_z_DSC);
                }
                else
                {
                    if (sorting_or == "ASC")
                        sort(Points_3D.begin(), Points_3D.end(), sort_point_DistFrOr_ASC);
                    else
                        sort(Points_3D.begin(), Points_3D.end(), sort_point_DistFrOr_DSC);
                }
            }
            else if (filtering_c == "Line2D")
            {
                cout << sorting_c << " " << sorting_or << endl;
                
                if (sorting_c == "Pt. 1’s (x, y)")
                {
                    if (sorting_or == "ASC")
                        sort(Lines_2D.begin(), Lines_2D.end(), sort_line_pt1_ASC);
                    else
                        sort(Lines_2D.begin(), Lines_2D.end(), sort_line_pt1_DSC);
                }
                else if (sorting_c == "Pt. 2’s (x, y)")
                {
                    if (sorting_or == "ASC")
                        sort(Lines_2D.begin(), Lines_2D.end(), sort_line_pt2_ASC);
                    else
                        sort(Lines_2D.begin(), Lines_2D.end(), sort_line_pt2_DSC);
                }
                else
                {
                    if (sorting_or == "ASC")
                        sort(Lines_2D.begin(), Lines_2D.end(), sort_line_length_ASC);
                    else
                        sort(Lines_2D.begin(), Lines_2D.end(), sort_line_length_DSC);
                }
            }
            else
            {
                if (sorting_c == "Pt. 1’s (x, y)")
                {
                    if (sorting_or == "ASC")
                        sort(Lines_3D.begin(), Lines_3D.end(), sort_line_pt1_ASC);
                    else
                        sort(Lines_3D.begin(), Lines_3D.end(), sort_line_pt1_DSC);
                }
                else if (sorting_c == "Pt. 2’s (x, y)")
                {
                    if (sorting_or == "ASC")
                        sort(Lines_3D.begin(), Lines_3D.end(), sort_line_pt2_ASC);
                    else
                        sort(Lines_3D.begin(), Lines_3D.end(), sort_line_pt2_DSC);
                }
                else
                {
                    if (sorting_or == "ASC")
                        sort(Lines_3D.begin(), Lines_3D.end(), sort_line_length_ASC);
                    else
                        sort(Lines_3D.begin(), Lines_3D.end(), sort_line_length_DSC);
                }
            }
            
            choice_5(filtering_c, sorting_c, sorting_or);
            cout << "\nPress any key to go back to main menu ... " << endl;
        }
        else if(choice == 6)
        {
        		choice_6(filtering_c, sorting_c, sorting_or);
        		cout << "\nGoing back to main menu ... " << endl;
        }   
    }
}




