#include <iostream>
//#include <string>

using namespace std;

int main() {
    
    int mychar = 'q';
    int mychar2 = 'b';
    
    
    int outcome;
    
    if (mychar >= 97 && mychar <= 122){
        mychar -= 32;
    }
    if (mychar >= 65 && mychar <=90){
        mychar += 32;
    }
    
    if (mychar2 >= 65 && mychar2 <= 90 ){
        mychar2 += 32;
    }
    
    
    if (mychar < mychar2){
        
        cout << mychar << " > " << mychar2 <<endl;
        
        outcome = -1;
        
        cout << outcome;
    }
    else if (mychar > mychar2){
        cout << mychar << " < " << mychar2 << endl;
        
        outcome = 1;
        cout << outcome;
    }
    else {
        cout << mychar << " = " << mychar2 << endl;
        outcome = 0;
        cout << outcome;
        
    }
    
}
