#ifndef _VEHICLES_H
#define _VEHICLES_H

#include <iostream>
#include "shapes.h"


enum VehicleType
{
    badSn, vehicle, car, truck, van, tanker, flatbed
};

class Vehicle
{
public:
    
    
   Vehicle(); //default constructor
   Vehicle( const char*, unsigned int, int = 0);
    
    
    virtual ~Vehicle();
    const char* SerialNumber() const; // returns serial number
    unsigned int PassengerCapacity() const; // returns passenger capacity
    virtual float LoadCapacity() const; // returns 0
    virtual const char* ShortName() const; // returns "UNK"
    virtual float Toll() const; // returns toll using fee schedule
    static  VehicleType SnDecode(const char* sn);
    
private:
     char* serialNumber_;
    unsigned int passengerCapacity_;
    
protected:
    bool verbose_; // default value 0 given in constructor prototype
};



class Car: public Vehicle
{
public:
    Car();
    Car( const char*, unsigned int, int = 0);
    virtual ~Car();
    const char* ShortName() const; // returns "CAR"
};


class Truck: public Vehicle
{
public:
    Truck();
    Truck( const char*, unsigned int, const char*, int = 0);
    virtual ~Truck();
    const char* ShortName() const;  // returns "TRK"
    float Toll() const;  // returns toll using fee schedule
    const char* DOTLicense() const; // returns the license no
    
private:
     char* DOTLicense_;

};

class Van: public Truck, public Box
{
public:
    Van();
    Van( const char*, unsigned int, const char*, float x,float y,float z, int = 0);

    virtual ~Van();
    float LoadCapacity() const;  // returns volume of box
    const char* ShortName() const;  // returns "VAN"
};

class Tanker: public Truck, public Cylinder
{
public:
    Tanker();
    Tanker( const char*, unsigned int, const char*, float x, float y, float z, int = 0);
    virtual ~Tanker();
    float LoadCapacity() const;  // returns volume of cylinder
    const char* ShortName() const;  // returns "TNK"
    
};

class Flatbed: public Truck, public Rectangle
{
public:
    Flatbed();
    Flatbed( const char*, unsigned int, const char*, float x, float y, float z, int = 0);
   virtual ~Flatbed();
    float LoadCapacity() const;  // returns area of rectangle
    const char* ShortName() const;  // returns "FLT"
};

#endif


