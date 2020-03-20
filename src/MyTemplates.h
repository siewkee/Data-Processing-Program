
#ifndef MYTEMPLATES_HEADER
#define MYTEMPLATES_HEADER
#include "A03_Header.h"

using namespace std;

template<typename T>
bool equals (const T& obj_one, const T& obj_two)
{
    return obj_one == obj_two;
}

template<typename T>
bool check_Duplicate(T obj, vector<T> v)
{
    bool duplicate = false;
    
    for (T p : v)
    {
        if (equals(p, obj))
            duplicate = true;
    }
    
    return duplicate;
}

template<typename T>
double scalar_difference(T obj_one, T obj_two)
{
	if (obj_one.getScalarValue() > obj_two.getScalarValue())
   	return obj_one.getScalarValue() - obj_two.getScalarValue();
   else
   	return obj_two.getScalarValue()- obj_one.getScalarValue();
}


#endif



