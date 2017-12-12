#include <iostream>
#include <string>

using namespace std;

int add3value(int);
void add3ref(int&);

int main(){
int example = 5;

cout << "passing a function by value " << add3value(example);
cout << endl; 

add3ref(example);
cout << "passing a function by reference parameter " << example;

}

int add3value(int number){
  return number + 3;
}

void add3ref(int &number){
  number += 5;
}
