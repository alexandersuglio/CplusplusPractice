#include <iostream>

using namespace std; 

class shapes 
{
  
  public: 
  shapes();
  shapes(int, int);
  
  int getSide1();
  int getSide2();
  void setSide(int, int);
  
  private:
  int side_a;
  int side_b;
  
};

class triangle: public shapes
{
public: 
triangle();
triangle(int, int, int);
int getSide3();
void setExtraSide(int);

private:
int side_c;

};