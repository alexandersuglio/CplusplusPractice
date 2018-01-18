#include <iostream>

using namespace std;

double addIt(double, double);

double subIt(double, double);

double multIt(double, double);

double divIt(double, double);

int main() {
cout << "welcome to calculator!" << endl;

double a;
cout << "enter first number ";
cin >> a;

char sign;
  cout << "enter sign: ";
  cin >> sign;
  
double b;
cout << "enter second number ";
cin >> b;

switch(sign){
case '+':
  cout << addIt(a, b);
  break;

case '-':
  cout << subIt(a,b);
  break;

case '/':
  cout << divIt(a,b);
  break;

case '*': 
  cout << multIt(a,b);
  break;

default:
  cout << "you pressed something else"<< endl;
  return 0;
  }
  
}

double addIt(double first, double last){
  return first + last;
}

double subIt(double first, double last){
  return first - last;
}

double multIt(double first, double last){
  return first * last;
}

double divIt(double first, double last){
  return first / last;
}


