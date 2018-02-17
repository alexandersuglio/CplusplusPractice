#include <iostream>
#include "header.h"

using namespace std;

Animal::Animal() : age(13), spots(3)
{
    
    //age = 13;
    // //spots = 3;
}

int Animal::getAge()
{
    
    return age;
}

int Animal::getSpots()
{
    
    return spots;
}
