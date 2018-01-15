//spring practice 
//switch statements practice

#include <iostream>

using namespace std; 

int main(){
  
int a;
cout << "pick either 1, 2, or 3"; 
cout << endl;
cin >> a;
cout << endl;

switch(a){
  case 1:
  cout << "you pressed 1";
  break;
  case 2: 
  cout << "you pressed 2";
  break;
  case 3:
  cout << "you pressed 3";
  break;
  default:
  cout << "you pressed something else";
}
  
}