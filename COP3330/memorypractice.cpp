#include <iostream>

int main() {
    
    int X = 4;
    int Y = 5;
    int Z = X;
    int Q = 66;
    
    std::cout << "&Z " << &Z << "    " << "&X " << &X << std::endl;
    std::cout << "Z " << Z;
    std::cout << std::endl;
    std::cout << "X " << X;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    int *Xptr = &X;
    std::cout <<"*Xptr " << *Xptr << " " << "Xptr " << Xptr;
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    int &W = X;
    std::cout << "W " << W << " " << "&W " << &W;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    /////
    
    Xptr = &Q;
    
    std::cout << "Xptr " << Xptr << " " << "&Q " << &Q;
    
    std::cout << std::endl;
    std::cout << std::endl;
    
    W = Q;
    
    std::cout << "&W " << &W;
    
}
