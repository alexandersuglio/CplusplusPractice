#include <iostream>
#include <vector>

using namespace std;



int main() {
    //format: vector<dataType> nameofVector
    //myvector.push_back(value ) ==> adds an element to the end of vector (also resizes it)
    
    //myVector.at(index) ==> return element at specified index number
    //myVector.size() ==> returns an unsigned int equal to the number of elements
    //myVector.begin() ==> reads vector from first element (aka index 0)
    //myVector.insert(myVector.begin() + integer, new value) ==> adds element before specifying index number
    //myVector.erase(myVector.begin() + integer) ==> removes element at specified index number
    //myVector.clear() ==> removes all elements in vector
    //myVector.empty() ==> returns boolean value if whether vector is empty
    
    
    vector<int> myVector;
    
    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(4);
    myVector.push_back(12);
    myVector.push_back(9);
    
    cout << "vector " << endl;
    
    for (unsigned int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] <<" " << endl;
    }
    
    myVector.insert(myVector.begin() +1, 5);
    cout << endl;
    
    
    for (unsigned int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] <<" " << endl;
    }
    
    cout << endl;
    
    myVector.erase(myVector.begin() + 3);
    
    for (unsigned int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] <<" " << endl;
    }
    
    cout << endl;
    
    cout << myVector.empty();
    myVector.clear();
    cout << endl;
    cout << myVector.empty();
    cout << endl;
    
    cout << "Hello World!\n";
    
    
    
    
    
    
}
