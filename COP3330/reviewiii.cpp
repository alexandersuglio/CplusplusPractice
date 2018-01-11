#include <iostream>

using namespace std;

int main(){
  cout << "array and rand() practice!" << endl;
 
 
 for (int i =1; i < 20; i++){
srand(i);  
int number = 1 + rand() % 10;
cout << number << endl;

}

cout << endl;

int const size = 5;
string array[5] = {"ruby", "joker", "coconut", "tutu", "sally russell"};

for (int f =0; f < size; f++){
cout << array[f] << endl;
}
}