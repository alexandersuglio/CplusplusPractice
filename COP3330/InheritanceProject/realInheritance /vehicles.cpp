#include <iostream>
#include "vehicles.h"

using namespace std;


vehicles::vehicles() : age(7)
{
  
}

vehicles::vehicles(int a) : age(a)
{
  
}

void vehicles::getAge(){
  cout << "age is " << age; 
}



