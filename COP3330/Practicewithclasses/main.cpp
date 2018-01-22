//
//  main.cpp
//  Practicewithclasses
//
//  Created by Alex Suglio on 1/20/18.
//  Copyright © 2018 Alex Suglio. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include <string>

using namespace std;

int main(){
   int a = 5;
    
    cout << "before calling pointer function a: " << a;
    cout << endl;
    //cout << "enter your name! " << endl;
    //string intro;
    //cin >> intro;
    
    myClassName mygradebook;
    //mygradebook.myName(intro);
    mygradebook.addthreewithPTR(&a);
    
    cout << "after calling pointer function a: " << a << endl;
    
}
