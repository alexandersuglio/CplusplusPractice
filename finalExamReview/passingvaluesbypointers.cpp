#include <iostream>

using namespace std; 

//passing a value with Pointers
void addThreebyPTR(int *);

//passing a value with references from before
void addThreebyRef(int &);


int main(){
int x = 5;
int y =5;
  
cout << x;
  
addThreebyPTR(&x);
cout << endl;
cout << x;
  
cout << endl;
cout << y;

addThreebyRef(y);
cout << endl;

cout << y;
 
}

void addThreebyPTR(int * number){
  *number = *number + 3;
}

void addThreebyRef(int & number){
 number = number + 3;
}