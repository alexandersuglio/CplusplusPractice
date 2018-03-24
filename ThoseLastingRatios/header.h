#include <iostream>

using namespace std;

class A 
{
  public:
  A();
 virtual void display();
};

class B: public A 
{
  public:
  B();
 void display();
 virtual void rubeIt();
};