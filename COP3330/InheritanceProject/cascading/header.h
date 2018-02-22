#include <iostream>

using namespace std;

class Family
{
    
public:
    
    Family();
    Family(int, int, int );
    //void setDay(int);
    // void setMonth(int);
    // void setYear(int);
    
    Family & setDay(int);
    Family & setMonth(int);
    Family & setYear(int);
    
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    
    // int getDay();
    // int getMonth();
    // int getYear();
    
private:
    int day;
    int month;
    int year;
    
    
};

