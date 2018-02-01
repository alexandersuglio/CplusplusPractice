#include <iostream>
#include <string.h>
using namespace std;

int main() {
    
    char greeting[20] = "Hi there";
    char leave[20] = "Hi there ";
    
    cout << strcmp(greeting, leave);
    
    cout << greeting;
    
    cout << endl;
    
    cout << leave;
    
    cout << endl;
    cout << endl;
    
    // int dif= greeting - leave;
    int dif = 10;
    //outer loop for entire list
    for (int j = 0; j < dif -1; j++)
    {
        //inner loop
        for (int i = 0; i < dif - 1; i++)
        {
            if (0 < strcmp(greeting, leave))
            {
                //convert char
                //iterate through
                char* conv = greeting[i];
                greeting[i] = greeting[i +1];
                greeting[i +1] = conv;
            }
        }
    }
    
    //////
    if (strcmp(greeting, leave) == 0){
        cout<< "equal";
    }
    else {
        cout <<"not equal";
    }
    
    
    
    cout << endl;
    
    cout << "Hello World!\n";
    
    int alex = 5;
    
    int *alexPTR = &alex;
    
    int **alexdbPTR = &alexPTR;
    
    cout << *alexPTR;
    
    cout << " " << endl;
    cout << **alexdbPTR;
    cout << endl;
    cout << "address of box " << &alex;
    cout << endl;
    cout << "address of box pointer " << alexPTR;
    cout << endl;
    cout << "address of double pointer " << *alexdbPTR;
    
}
