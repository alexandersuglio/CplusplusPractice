#include <iostream>
#include "header.h"

  using namespace std;
  
  
Shape::Shape(string s)
{
  name = s;
};
  
void Shape::setName( string s)
{
  name = s;
};
  
string Shape::getName() const
{
 
 return name;
  
};
 


Circle::Circle(string n, double r): Shape(n), radius(r)
{
 // radius = r;
};

//only constructors take member initializers!

void Circle::setRadius(double r) //: radius(r)
{
radius = r;  
};

double Circle::getRadius()
{
  return radius;
}

   double Circle::getArea() const
  {
    return 3.14 * radius * radius;
  }


Rectangle::Rectangle(string n, double l, double w): Shape(n), length(l), width(w)
{
  
}

void Rectangle::setLength(double l)
{
  length = l;
}

void Rectangle::setWidth(double w)
{
  width = w;
}  

 double Rectangle::getLength()
 {
   return length;
 }
 
double Rectangle::getWidth()
{
  return width;
}

   double Rectangle::getArea() const
  {
    return length * width;
  }

Triangle::Triangle(string n, double b, double w): Shape(n), base(b), width(w)
{
  
}

   double Triangle::getArea() const
  {
    return .5 * base * width;
  }



