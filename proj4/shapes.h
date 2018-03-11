#ifndef _SHAPES_H
#define _SHAPES_H

#include <iostream>


class Shape
{
public:
    Shape(); //default constructor
    
    Shape(float,float y,float z,int=0);
    virtual ~Shape();
    virtual const char* Name   () const; // returns "generic"
    virtual float       Volume () const;  // returns volume of object
    virtual float       Area   () const;  // returns area of object
    
protected:
    float x_, y_, z_; // dimensions of shape
    bool  verbose_;   // default value 0 given in constructor prototype
private:
    Shape(const Shape&);                 // Prevent copy-construction
    Shape& operator=(const Shape&);
    
};

class Box: public Shape
{
public:
    Box();  //Default Constructor
    Box(float x,float y,float z, int=0);
    
    virtual ~Box();
    const char* Name   () const; // returns "box"
   float       Volume () const;  // returns volume of box object
    float       Area   () const;  // returns surface area of box object
    
private:
    Box(const Box&);                 // Prevent copy-construction
    Box& operator=(const Box&);
};


class Cylinder: public Shape
{
public:
    Cylinder(); //Default construcotr
    
    Cylinder(float radius, float z, int = 0);

    virtual ~Cylinder();
    const char* Name   () const;  // returns "cylinder"
    virtual float       Volume () const;  // returns volume of cylinder object
    virtual float       Area   () const;  // returns surface area of cylinder object
private:
    Cylinder(const Cylinder&);                 // Prevent copy-construction
    Cylinder& operator=(const Cylinder&);
   
};

class Rectangle: public Shape
{
public:
    Rectangle(); //default constructor
     Rectangle(float x, float y, float z, int =0);
    virtual ~Rectangle();
    const char* Name   () const;  // returns "rectangle"
    float       Area   () const;  // returns area of rectangle object
private:
    Rectangle(const Rectangle&);                 // Prevent copy-construction
    Rectangle& operator=(const Rectangle&);
    float l;
    float w;
    float x;
    int y;
    
};


#endif







