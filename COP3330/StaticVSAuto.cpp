#include <iostream>

using namespace std;

int main() {
  cout << "examples with autmatic variable" << endl;

  
  for (int i=0; i<5; i++){
    int a = 7;
    a = a + 1;
    
    cout << a << " ";
    
  }
  
  cout << endl;
  
  cout << "examples with static variable" << endl;
 for (int i=0; i<5; i++){    
  static int b = 7;
  b = b + 1;
  cout << b << " ";  
     
 }    
 
}

//static variables: the use of static inside a function means that once the variable has been initialized, it remains in memory until the end of the program. You can think of it as saying the variable sticks around maintinaing its value, until the program COMPLETELY ends. 

//static prevents a variable from being reinitialized inside a loop. 

//you might use a static variable in order to preserve information about the last value a function returned. 

//you can also have static member functions of a class, static member functions are functions that do not require an instance of the class, and are called the same way you access static member variables. 

//automatic variables: are local variables whose lifetime ends when execution leaves their scope, and are reinitialized when the scope is reentered

//"beginning a new " vs. "picking up where you left off"
