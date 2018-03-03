#include <iostream>

#include "shapes.h"

//#include "vehicles.h"

using namespace std;

int main() {
  cout << "Hello World!\n";
  
  shapes shape1;
  
  cout << shape1.getSide1();
  cout << endl;
  cout << shape1.getSide2();
  
  cout << endl;
  cout << endl;
  
  //boilplate constructor
  triangle shape2;
  
  cout << shape2.getSide1();
    cout << endl;

  cout << shape2.getSide2();
    cout << endl;

  cout << shape2.getSide3();
  
  cout << endl;
  cout << endl;
  
  //overloaded constructor
  triangle shape3(3,4,5);
  
    cout << shape3.getSide1();
    cout << endl;

  cout << shape3.getSide2();
    cout << endl;

  cout << shape3.getSide3();
  
  
  
  /*
  vehicles ruby;
  
  ruby.getAge();
  
  
  cout << endl;
  cout << endl;
  
  vehicles joker(34);
  
  joker.getAge();
  */
  
  
}