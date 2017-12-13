#include <iostream>

using namespace std;

void squarewithPTR(int *);
void squarewithRef(int &);
int squarewithValue(int);

int main(){
  
  int x = 5;
  int y =5;
  int z= 5;
  squarewithPTR(& x);
  cout << x;
  
  cout << endl;
  
  squarewithRef(y);
  cout << y;
  
  cout << endl;
  
  cout << squarewithValue(z);

}

void squarewithPTR(int *number){
  *number = *number * *number;
}

void squarewithRef(int &number){
  number = number * number;
}

int squarewithValue(int number){
  return number * number;
}