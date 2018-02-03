#include <iostream>

using namespace std;

int addThree(int );
void addThreeMore(int &);
void addThreebyPTR(int *);

int main(){
  
  int a = 10;
  
 cout << "before I call the function, a: "<< a;
 
 cout << endl;
  
  cout << "with addThree(a), a: " << addThree(a);
  
  cout << endl;
  
  cout << "after function called, a: " << a;
  
  cout << endl;
  
  addThreeMore(a);
  
  cout << "with addThreeMore(a), a: " << a << endl; 
  
  cout << endl; 
  
  cout << "calling a function with reference parameters will change the value of the variable" << endl;
  cout << "using a regular 'int' function will not change the value of the variable after the function is called ";
  
addThreebyPTR(&a);
cout << endl;
cout << a;
  
cout << endl;

}

int addThree(int number){
  return number +3;
}

void addThreeMore(int &number){
 number = number +3; 
  
}

void addThreebyPTR(int *number){
 *number = *number + 3;
}
