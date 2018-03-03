#include <iostream>
#include "shapes.h"

using namespace std;

shapes::shapes() : side_a(0), side_b(0)
{
  
}

shapes::shapes(int a, int b) : side_a(a), side_b(b)
{
  
}

void shapes::setSide(int a, int b)
{
  side_a = a;
  side_b = b;
}

int shapes::getSide1()
{
  return side_a;
}

int shapes::getSide2()
{
   return side_b;
 
}

triangle::triangle() : side_c(0)
{
  
}

triangle::triangle(int x, int y, int c) : shapes(x,y), side_c(c)
{
  
}

void triangle::setExtraSide(int c)
{
 side_c = c;
}

int triangle::getSide3()
{
  
  return side_c;
}


