#include <iostream>

using namespace std;

//multiple selection (SWITCH) structure

int main(){
  int choose;
  
  cout << "type in either a 1 or 2 below" << endl;
  
  cin >> choose;
  switch(choose){
    case 1: cout << "picked 1" << endl;
    break;
    case 2: cout << "picked 2" << endl;
    break;
    default: cout << "you didn't follow the rules" << endl;
    break;
  }
  
}