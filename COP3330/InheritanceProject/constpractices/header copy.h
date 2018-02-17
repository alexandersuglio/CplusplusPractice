#include <iostream>


using namespace std;

class Animal
{
public:
    Animal();
    int getAge();
    int getSpots();
    
private:
    int const age;
    int spots;
};
