#include <iostream>

using namespace std;

int j =0;
int k =0;

int main(){
//repetition statement (for loop)
  for (int i =0; i <= 10; i++){
    cout << "I am " << i << " years old!" << endl;
  }
  
  cout << endl;
//do while statement
do {
    
        j++;

    cout << "I am " << j << " years old!" << endl;

  }
while (j <= 10);

cout << endl; 
  
do {
    
cout << "I am " << k << " years old!" << endl;
    k++;
  }
  while (k<= 10);
  
}