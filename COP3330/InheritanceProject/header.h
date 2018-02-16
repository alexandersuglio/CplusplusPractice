#include <iostream>

using namespace std;

class Animal
{
    
private:
    int eyes;
    int toes;
    
public:
    Animal();
    Animal(int, int);
    void setNumberofEyes(int);
    int getNumberofEyes();
    void setNumberofToes(int);
    int getNumberofToes();
};

