#include <iostream>

  using namespace std;
 
 
 //polymorphism
 //dynamic binding 
 
 //abstract base class
class Shape
{
  //similar to private, but with child classes can change
  protected:
  string name;  
  
  public:
  Shape(string);
  
  void setName( string );
  
  string getName() const;
 
 //pure virtual function
virtual double getArea() const = 0;
 
 
 
 
};

//first class 
class Circle: public Shape
{
  double radius;
  
  public: 
  Circle(string, double);
  
  void setRadius(double);
  double getRadius();
  
  virtual double getArea() const;
  
};

class Rectangle: public Shape
{
  double length, width;
  
  public:
  Rectangle(string, double, double);
  
  void setLength(double);
  void setWidth(double);
  
  double getLength();
  double getWidth();
  
    virtual double getArea() const;

};


class Triangle: public Shape
{
  double base, width;
  
  public:
  Triangle(string, double, double);
  
   virtual double getArea() const;

  
};










