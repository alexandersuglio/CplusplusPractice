#include <iostream>
#include "header.h"


using namespace std;

class camel: public Animal
{
private:
    int numberofHumps;
    
public:
    camel();
    int getHumps();
    
};
