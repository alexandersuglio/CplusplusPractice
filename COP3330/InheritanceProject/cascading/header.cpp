#include <iostream>
#include "header.h"

using namespace std;

//initializes values
Family::Family() : day(0), month(0), year(0)
{
    
}

//assigns different values besides default 0's
Family::Family(int d, int m, int y) : day(d), month(m), year(y)
{
    
}

/*
 //set day value
 void Family::setDay(int dSet)
 {
 day = dSet;
 }
 
 //set month value
 void Family::setMonth(int mSet)
 {
 month = mSet;
 
 }
 
 //set year value
 void Family::setYear(int ySet)
 {
 year = ySet;
 
 }
 */

Family &Family::setDay(int dSet)
{
    day = dSet;
    return *this;
}

Family &Family::setMonth(int mSet)
{
    month = mSet;
    return *this;
}

Family &Family::setYear(int ySet)
{
    year = ySet;
    return *this;
}







//returns value
int Family::getDay() const
{
    return day;
}

//returns value

int Family::getMonth() const
{
    return month;
}

//returns value
int Family::getYear() const
{
    return year;
}
