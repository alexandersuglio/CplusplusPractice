#include <iostream>
#include "header.h"

using namespace std;

Animal::Animal() : eyes(3), toes(2)
{
    
}

Animal::Animal(int eyesSet, int toesSet): eyes(eyesSet), toes(toesSet)
{
    
}

void Animal::setNumberofEyes(int eyesInt)
{
    eyes = eyesInt;
}

int Animal::getNumberofEyes()
{
    return eyes;
}

void Animal::setNumberofToes(int toesInt)
{
    toes = toesInt;
}

int Animal::getNumberofToes()
{
    return toes;
}
