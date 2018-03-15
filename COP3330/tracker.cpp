//Tracker.cpp
//Alexander Suglio
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>

#include "vehicles.h"


//output function
void Output(Vehicle *vptr)
{
    
    std::cout << std::setw(6) << std::setprecision(2) << std::fixed << std::right << std::showpoint << vptr->ShortName() << std::setw(7) << vptr->Toll()
<< std::setw(10) << vptr->PassengerCapacity() << std::setw(10) << vptr->LoadCapacity();
    
    
    if (truck <= Vehicle::SnDecode(vptr->SerialNumber()))
    {
        //dynamic cast conversion
        std::cout << std::setw(13) << (dynamic_cast<Truck*>(vptr))->DOTLicense();
    }
    else
        //fill blank spaces
    std::cout << std::setw(13) << "(NA)";
    std::cout << std::setw(15) << vptr->SerialNumber() << std::endl;

}


int main(){

    float d1; //length
    float d2; //width or radius
    float d3; //height
    
    //passenger cap
    unsigned int pc;
    
    //initialize totals, tons, and tolls to 0
    int badSNTot = 0;
    int vTot = 0;
    int cTot = 0;
    int truckTot = 0;
    //int vTot = 0;
    int tankTot = 0;
    int flatTot = 0;
    
    float tonnage = 0;
    float tolls = 0;
    
    //The maximum number of vehicles in a traffic segment (100)
    const size_t maxSegSize= 100;

    //The maximum number of characters in a vehicle serial number (50)
    const int maxSerialNumb = 20;

    // The maximum number of characters in a truck DOT license (50)
    const int maxDOT = 20;
    
    char sn[maxSerialNumb];
    char dot[maxDOT];
    
    //segment size
    size_t segSize;
    
    Vehicle *seg[maxSegSize];
    VehicleType vech;
    
    //start message
    std::cout << "RCL::Tracker started... " << std::endl;

   
    do
    {
        //input stream
        std::cin >> segSize;
        
       if (segSize == 0)
       {
           break;
       }
        else if (segSize > maxSegSize)
        {
            std::cout << "ERROR: Size greater than tracker can handle! " << std::endl;
            break;
        }
        
        for (size_t i = 0; i < segSize; i++)
        {
            
            //by serial number
            std::cin >> sn;
        
        //sndecode from vehicles
        vech = Vehicle::SnDecode(sn);
        switch (vech)
        {
                
            case badSn:
                //tally up
                badSNTot++;
                std::cin >> pc;
               
                //allocate new space
                seg[i] = new Vehicle(sn, pc);
                break;
                
            case vehicle:
                //tally
                vTot++;
                std::cin >> pc;
                
                //allocate new space
                seg[i] = new Vehicle(sn, pc);
            break;
            
            case car:
                //tally
                cTot++;
                std::cin >> pc;
              
                //allocate new space
                seg[i] = new Car(sn, pc);
                break;
                
            case truck:
                //tally
                truckTot++;
                std::cin >> pc >> dot;
               
                //allocate new space
                seg[i] = new Truck(sn, pc, dot);
                
                break;
                
                
            case van:
                //tally
                vTot++;
                std::cin >> pc >> dot >> d1 >> d2 >> d3;
                
                //allocate new space
                seg[i] = new Van(sn, pc, dot, d1, d2, d3);
                break;
                
                
            case tanker:
                //tally
                tankTot++;
                std::cin >> pc >> dot >> d1 >> d2;
               
                //allocate new space
                seg[i] = new Tanker(sn, pc, dot, d1, d2, d3);
                break;
                
                
            case flatbed:
                //tally
                flatTot++;
                std::cin >> pc >> dot >> d1 >> d2;
              
                //allocate new space
                seg[i] = new Flatbed(sn, pc, dot, d1, d2, d3);
                break;
                
                
            default:
                //default message if no vehicle
                std::cout << "ERROR: bad serial number" << std::endl;
                break;
        }
        
        if (seg[i] == 0)
        {
            std::cout << "allocation error" << std::endl;
            break;
        }
            
            //points to vehicle member functions
        tonnage += seg[i]-> LoadCapacity();
        tolls += seg[i]->Toll();
    }
    
    //seg summary table below
        std::cout << "Segment Summary " << std::endl;
     
        std::cout << "===============" << std::endl;
        
        std::cout << "Cars: " << cTot << std::endl;
   
        std::cout << "Trucks: " << truckTot << std::endl;
   
        std::cout << "Vans: " << vTot << std::endl;
  
        std::cout << "Tankers: " << tankTot << std::endl;
   
        std::cout << "Flatbeds: " << flatTot << std::endl;
  
        std::cout << "Unknowns: " << vTot << std::endl;
   
        std::cout << "Badsn: " << badSNTot << std::endl;
   
        std::cout << std::setprecision(2) << std::fixed;
   
        std::cout << "Tonnage: " << tonnage << std::endl;
    
        std::cout << "Tolls: $" << tolls << std::endl;
    
        std::cout << std::endl;
        std::cout << std::endl;
        
        
    //seg details table below
    std::cout << "Segment Details" << std::endl;
       
      std::cout << "===============" << std::endl;
      
        std::cout << std::endl;
        
    std::cout << std::setw(6) << std::right << "Type" << std::setw(7) << "Toll" << std::setw(10) << "Pass Cap" << std::setw(10) << "Load Cap" << std::setw(13) << "DOT License" << std::setw(15) << "Serial Number"
        << std::endl;
    
        std::cout << std::setw(6) << std::right << "----" << std::setw(7) << "----" << std::setw(10) << "--------" << std::setw(10) << "--------" << std::setw(13) << "-----------" << std::setw(15) << "-------------"
        << std::endl;
        
    for (size_t i = 0; i < segSize; i++)
    {
        //report data
        Output (seg[i]);
        
        //release memory
        delete seg[i];
    };
    
    }
    
    //keeps open
     while (segSize > 0);
    
    //goodbye message
    std::cout << "...Thank you for using SunPass Tracker!" << std::endl;
}
