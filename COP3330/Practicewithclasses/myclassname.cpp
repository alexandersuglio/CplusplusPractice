//
//  myclassname.cpp
//  Practicewithclasses
//
//  Created by Alex Suglio on 1/20/18.
//  Copyright © 2018 Alex Suglio. All rights reserved.
//

//#include "myclassname.hpp"

#include <iostream>
#include <string>

#include "Header.h"

using namespace std;

string myClassName::getName()
{
           return alias;
 }

void myClassName::myName(string name)
{
     alias = name;
    cout << "my name is "<< getName() << endl;
  }
