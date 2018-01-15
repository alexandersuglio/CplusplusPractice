//spring review
//passing using pointers
//passing values through pointers

#include <iostream>

using namespace std;

void squarewithPTR(int*);

int main(){
  
  int a = 5;
  int *aptr = &a;

  cout << "memory address of a " << &a;
  cout << endl;
  cout << "value of a " << a;
  cout << endl;
  cout << "memory address of aptr " << aptr;
  cout << endl;
  cout << "value of aptr " << *aptr;
  cout << endl;

  squarewithPTR(&a);
  cout << "value of 'a' after passing value through pointer " << a;
}

void squarewithPTR(int *b){
  *b *= *b;
}