#include <iostream>
#include "header.h"

using namespace std;

int main() {
    cout << "Hello World!\n";
    
    /*
     Family obj1;
     
     cout << obj1.getDay();
     cout << obj1.getMonth();
     cout << obj1.getYear();
     
     cout << endl;
     
     Family obj2(2,4,6);
     cout << obj2.getDay();
     cout << obj2.getMonth();
     cout << obj2.getYear();
     
     cout << endl;
     */
    
    
    Family objtest;
    
    objtest.setDay(7).setMonth(7).setYear(7);
    
    cout <<objtest.getDay();
    
    
    //Family obj3(3,2, );
    //cout << obj3.getDay();
    //cout << obj3.getMonth();
    //cout << obj3.getYear();
    
}
