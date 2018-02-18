#include <iostream>

using namespace std;

class food{
public:
    food(int, int, int);
    void print();
    
private:
    int width;
    int height;
    int temp;
    
};

food::food(int a, int b, int c) : width(a), height(b), temp(c)
{
    
}

void food::print(){
    cout << this->width;
    cout << (*this).height;
    cout << temp;
}

int main() {
    cout << "he ";
    
    food obj(2,3,4);
    obj.print();
    
    
}
