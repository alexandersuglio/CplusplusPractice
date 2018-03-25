#include <iostream>

//abstract class becuase it has a pure virtual function
//NO implementation with abstract classes 
class shape 
{
  public:
   virtual void name() = 0;
};

class four_sides: public shape
{
  public:
  void name();
};

class three_sides: public shape
{
  public:
  void name();
};

//regular virtual functions have the option to be overridden 
