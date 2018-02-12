#include <iostream>

using namespace std;

class Dogs{
public:
    Dogs(string);
    void getName();
private:
    string dogsName;
};

Dogs::Dogs(string pooch) : dogsName(pooch)
{
}

void Dogs::getName( )
{
    cout << "Your dogs name is " << dogsName;
    
}


int main() {
    
    string pupname("Ruby");
    
    Dogs dog1(pupname);
    
    dog1.getName();
    
    
}

