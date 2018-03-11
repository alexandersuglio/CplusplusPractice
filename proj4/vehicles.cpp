#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string.h>

#include "vehicles.h"

Vehicle::Vehicle(): serialNumber_(0), passengerCapacity_(0)
{
    std::cout << "vehicle consturctor";
}

Vehicle::Vehicle( const char* sn, unsigned int b, int c): serialNumber_(0), passengerCapacity_(b)
{
    verbose_ = c;
    
    serialNumber_ = new(std::nothrow) char[1 + strlen(sn)];
if (serialNumber_ == 0)
{
std::cerr << "Unable to allocate memory for Vehicle::serialNumber\n";
exit(EXIT_FAILURE);
}

strcpy(serialNumber_, sn);

}

Vehicle::~Vehicle()
{
    delete[] serialNumber_;

}

const char* Vehicle::SerialNumber() const
{
    return serialNumber_;
} // returns serial number

unsigned int Vehicle::PassengerCapacity() const
{
    return passengerCapacity_;
}// returns passenger capacity


float Vehicle::LoadCapacity() const
{
    return 0;
}
// returns 0

const char* Vehicle::ShortName() const
{
    return "UNK";
}
// returns "UNK"

float Vehicle::Toll() const
{
    float fee = 2.00;
    return fee;
} // returns toll using fee schedule

VehicleType Vehicle::SnDecode(const char* sn)
{
    
    //
    /*
    if(sn[0])
    {
      return badSn;
    }
    else if (sn[1])
    {
      return vehicle;
    }
    else if (sn[2])
    {
      return car;
    }
    else if (sn[3])
    {
      return truck;
    }
    else if (sn[4])
    {
      return van;
    }
    else if (sn[5])
    {
    return tanker;
    } 
    else if (sn[6])
    {
    return flatbed;
    }
    else {
    return badSn;
    }
    */
    //
    
    
    
    switch (sn[0])
    {
        case '1':
            return vehicle;
        case '2':
            return car;
        case '3':
            return truck;
        case '4':
            return van;
        case '5':
            return tanker;
        case '6':
            return flatbed;
        default:
            return badSn;
    }
    
    
}





Car::Car()
{
    
}

Car::~Car()
{
    
}

Car::Car(const char* sn, unsigned int b, int c): Vehicle(sn, b, c) 
{
  
}

const char* Car::ShortName() const
{// returns "CAR"
    return "CAR";
};

Truck::Truck(): Vehicle(), DOTLicense_(0)
{
    
}

Truck::Truck(const char* sn, unsigned int b, const char* dl, int c): Vehicle(sn, b, c), DOTLicense_(0)
{
    //DOTLicense_ = dl;
    //std::cout << "Truck()\n";
DOTLicense_ = new(std::nothrow) char[1 + strlen(dl)];
if (DOTLicense_ == 0)
{
std::cerr << "Unable to allocate memory for Truck::DOTLicense\n";
exit(EXIT_FAILURE);
}
strcpy(DOTLicense_, dl);
}

Truck::~Truck()
{
 delete[] DOTLicense_;
   
}

const char* Truck::ShortName() const
{
    return "TRK";
}// returns "TRK"

float Truck::Toll() const
{
    return 10.00;
}// returns toll using fee schedule

const char* Truck::DOTLicense() const
{
    return DOTLicense_;
}  // returns the license no
    
//char* DOTLicense_;
    

Van::Van()
{
    
}

Van::~Van()
{
    
}

Van::Van( const char* sn, unsigned int b, const char* DOT, float x, float y, float z, int c): Truck(sn , b, DOT, c), Box(x, y, z)
{

}


float Van::LoadCapacity() const
{
   return Box::Volume();
}// returns volume of box

const char*   Van::ShortName() const
{
    return "VAN";
    // returns "VAN"
};


Tanker::Tanker()
{
    
}

Tanker::Tanker(const char* sn, unsigned int b, const char* DOT, float x, float y, float z, int c): Truck( sn, b, DOT, c), Cylinder(x, y, z)
{
    
}

Tanker::~Tanker()
{
    
}

float Tanker::LoadCapacity() const
{
    return Cylinder::Volume();
}// returns volume of cylinder

const char*  Tanker::ShortName() const
{
    return "TNK";
    // returns "TNK"
    
};

Flatbed::Flatbed()
{
    
}

Flatbed::Flatbed( const char* sn, unsigned int b, const char* DOT, float x, float y, float z, int c): Truck(sn, b, DOT, c), Rectangle(x,y,z)
{

}

Flatbed::~Flatbed()
{
    
}

float Flatbed::LoadCapacity() const
{
    return Rectangle::Area();
   
};


const char*   Flatbed::ShortName() const
{
    return "FLT";
}// returns "FLT"

