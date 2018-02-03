
#include <iostream>
#include "Header.h" // include definition of class Time from Time.h
using namespace std;

int main()
{
    /*
     Joker t; // instantiate object t of class Time 11
     // output Time object t's initial values
     cout << "The initial universal time is ";
     t.printUniversal(); // 00:00:00
     cout << "\nThe initial standard time is ";
     t.printStandard(); // 12:00:00 AM
    
     t.setTime( 13, 27, 6 ); // change time 19
     // output Time object t's new values
     cout << "\n\nUniversal time after setTime is ";
     t.printUniversal(); // 13:27:06
     cout << "\nStandard time after setTime is ";
     t.printStandard(); // 1:27:06 PM
    
     t.setTime( 99, 99, 99 ); // attempt invalid settings 27
     // output t's values after specifying invalid values
     cout << "\n\nAfter attempting invalid settings:"
    << "\nUniversal: ";
     t.printUniversal(); // 00:00:00
     cout << "\nStandard time: ";
     t.printStandard(); // 12:00:00 AM
     cout << endl;
    
     */

    
    string first = "alex";
    string firsti = "steve";
    
    cout << endl;
    
    Test x;
    
   cout << x.getName(first);
    
    cout << endl;
    cout << endl;
    cout << endl;
    
   // Test emp3(12);
    
    cout << endl;
    
   Test emp1(24, first);
    Test emp2(45, "james");
    
    /*
cout << endl;
    Test emp2(15, firsti);
    cout << endl;
     */
    
   // Test obj1;
//    Test obj2(24);
//    Test obj1(13);
//    Test x;
//    //Test ~test();
//
//    obj1.getName(first);
//    cout << endl;
//    obj2.getName(first);
//    cout << endl;
//    cout << endl;
    
     }//endmain
