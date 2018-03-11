#include <iostream>

#include "shapes.h"

const double PI = 3.14159;


//constructor
Shape::Shape()
{

}

//constructor

Shape::Shape(float x,float y,float z, int verbose)
{
    x_=x;
    y_=y;
    z_=z;
    verbose_= verbose;
}

Shape::~Shape()
{
    std::cout << "~Shape()" << std::endl;
}

const char* Shape::Name() const
{
    return "generic";
}

float Shape::Volume() const
{
    return 0.00;
}

float Shape::Area() const
{
    return 0.00;
}

//constructor

Box::Box()
{

}

//constructor

Box::Box(float a,float b, float c,int v): Shape(a,b,c,v)
{
    
}

Box::~Box()
{
    std::cout << "~Box()" << std::endl;

}

const char* Box::Name() const
{
    return "box";
}

float Box::Volume() const
{
    float vol = x_ * y_ * z_;
    return vol;
}

float Box::Area() const
{
    float area = 2*(x_ * y_) + 2*(x_ * z_) + 2*(y_ * z_);
    
    return area;
}

Cylinder::Cylinder()
{

}


//constructor
Cylinder::Cylinder(float radius, float c, int v ): Shape(radius, c, v)
{
  
}


Cylinder::~Cylinder()
{
    std::cout << "~Cylinder()" << std::endl;

}


const char* Cylinder::Name() const
{
    return "cylinder";
}

float Cylinder::Volume() const
{
    float vol = PI * x_ * x_ * y_;

    
    return vol;
}

float Cylinder::Area() const
{
    float area = 2*(PI*x_*z_) + 2*(PI*x_*x_);

    return area;
}

Rectangle::Rectangle()
{
       
 
}

//constructor
Rectangle::Rectangle(float a,float b, float c, int v): l(a), w(b), x(0), y(0)
{
    
}


Rectangle::~Rectangle()
{
    std::cout << "~Rectangle()" << std::endl;

}


const char* Rectangle::Name() const
{
    return "rectangle";
}

float Rectangle::Area() const
{
    float area = l * w;
    return area;
}


















