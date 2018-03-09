#include <iostream>
#include "header.h"

using namespace std;


int main() {
  
  //Shape s("rube");
 // cout << s.getName();
  
  Circle c("Circle", 3);
  
  cout << c.getName();
  cout << c.getRadius();
 cout << c.getArea();
  cout << "Hello World!\n";
  
  cout << endl;
  
  Rectangle r("rect", 45, 2);
  
  cout << r.getName();
  cout << endl;
  cout << r.getLength();
  
  cout << endl;
  cout << r.getArea();
  Triangle t("tri", 3, 6);
  
  cout << endl;
cout <<  t.getArea();
cout << endl;

Shape* shapes[3] = {new Circle("cicrcle", 2.1), new Rectangle("rectangle", 5, 7), new Triangle("triangular", 8.1, 2.4)
};


for (int i =0; i <3; i++)
{
  cout << shapes[i]->getName() << " " << endl;
}




};