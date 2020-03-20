This is a program that reads in and process some ‘messy’ records from a file that contains data meant for different kinds of classes. These data are jumbled up and unsorted, and to make it worse, for any particular row of record, there may be multiple duplicates scattered over the entire file!

The program possess the following capabilities:a) read in the records from a user-specified filename
b) remove all duplicate rows of data
c) filter and display the data according to user-specified sorting criteria 
d) store the records displayed in c),in a user-specified filename
The program includes the following functions:

= 4 classes of objects created (‘Point2D’, ‘Point3D’, ‘Line2D’ and ‘Line3D’)
= Object Relationship
	> Point3D inherits Point 2D
	> Line3D inherits Line2D
	> Line2D composed of two Point2D
	> Line3D composed of two Point3D
= Output manipulators created customise display/store data
= All class objects are checked for duplications
= Generic template functions developed for common functions
= Filtering criteria based on object type
= Comparator functions to sort object types

