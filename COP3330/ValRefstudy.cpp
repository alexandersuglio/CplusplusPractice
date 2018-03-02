#include <iostream>

using namespace std;

//passing by a value makes a copy of the val, meaning you have two different things. taking up more memory
void passbyvalue(int a)
{
    cout << "pass by val........." << &a;
    
    
}


//passing by ref doesnt make a copy of the val, it uses the same value but just REFERENCES it
void passbyref(int & a){
    cout << "pass by ref........." << &a;
    
    
}


int main(){
    
    
    int b = 6;
    
    passbyvalue(b);
    
    
    
    cout << endl;
    
    passbyref(b);
    
    
    
    cout << endl;
    
    cout << "the val inside main." << &b;
    cout << endl;
    
    
    
}
