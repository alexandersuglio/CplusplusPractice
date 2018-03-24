
#include <iostream>
#include "header.h"

using namespace std;

int main() {

  A aobj;
  
  aobj.display();
  cout << endl;
  
  B bobj;
  
 // aobj.rubeIt();
  
  //dynamic_cast<B&>(A);
  
  bobj.display();
  cout << endl;

 //this works
  bobj.rubeIt();
  
  
  
A *aobjptr;
  
B *bobjptr;
  

aobjptr = &bobj;
  
  
  
dynamic_cast<B*>(aobjptr);
aobjptr->display();  
  
//aobj.rubeIt();
// bobjptr = &aobj;
// bobjptr.display();

cout << endl;
  
bobj.display();
  
  
  
}