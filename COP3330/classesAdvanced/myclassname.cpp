// Fig. 9.2:
#include <iostream>
#include <iomanip>
#include "Header.h" // include definition of class Time from Time.h
using namespace std;
// Time constructor initializes each data member to zero.
// Ensures all Time objects start in a consistent state.

/*
Joker::Joker()
{
    hour = minute = second = 0;
}
// end Time constructor
// set new Time value using universal time; ensure that
// the data remains consistent by setting invalid values to zero

void Joker::setTime( int h, int m, int s )
{
    hour = (h >= 0 && h<24) ? h : 0;
    minute = (m >= 0 && m <60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Joker::printUniversal()
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2)<< second;
}

void Joker::printStandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2)<< minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");
}

 */

Test::Test()
{
    
}

Test::Test(int a){
    cout << a;
  };

Test::Test(int age, string name){
   cout << "hey there my name is " << getName(name);
  cout << endl;
    cout << "your age is " << age << " years old!";
    cout << endl;
    
}

string Test::getName(string name){
    return name;
   // cout << "my name is " << name << endl;
};


//Test::~Test(){
//    cout << "we're done " << endl;
//};

