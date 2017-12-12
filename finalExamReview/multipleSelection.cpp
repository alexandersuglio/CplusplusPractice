#include <iostream>

using namespace std;

//multiple selection structure 

int main(){
int entry;
cout << "enter a number over, under, or equal to 50" << endl; 
cin >> entry;

if (entry < 50){
  cout << entry << " is under 50!";
}
else if (entry == 50){
  cout << entry << " is EXACTLY 50";
}
else {
  cout << entry << " is over 50!";
}
return 0;
}
