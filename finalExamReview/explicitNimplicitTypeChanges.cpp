#include <iostream>
#include <stdlib.h>

using namespace std; 

int main(){

int a = 5;
int b= 2;

double c = 5;
double d = 2;

//regular int/int
cout << a/b;

cout << endl;

// int/double
cout << a/d;

cout << endl;

// double/double
cout << c/d;

cout << endl;

//use the static cast operator to convert int to a double 
cout << a/static_cast<double>(b);
  
}
