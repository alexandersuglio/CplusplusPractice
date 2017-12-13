//pointers

#include <iostream>

using namespace std;

int main(){
  int number = 6;

//pointer can either be initialized to 0, NULL, or the address of the variable it's pointing to
  int *numberPTR;
  numberPTR = &number;
  
  
  cout << "value of address of pointer = " << numberPTR << endl;
  
  cout << "value of pointer = " << *numberPTR << endl;

//* and & are inverses of each other 
//they cancel each other out when placed next to each other

  cout << "&*numberPTR gives you an address: " << &*numberPTR << endl;
  cout << "&numberPTR points to it's own address " << &numberPTR << endl;
  
  cout << "number = " << number << endl;
  cout << "address of number = " << &number << endl;
  
  
  
}