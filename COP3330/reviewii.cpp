#include <iostream>

using namespace std;

int main(){
  
  int a =0;
  
  
  for (int i=0; i < 5; i++){
    cout << "for loop test number: " << i << endl;
  }
  
  cout << endl;
  
do {
  cout << "a: " << a << endl;
  a++;
}

while( a < 20);

cout << endl;

if (a < 100){
  cout << "a is " << (100 - a) << " away from 100!" << endl;
}




}