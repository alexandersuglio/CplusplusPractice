#include <iostream>
#include <vector>

using namespace std;

//function declarations
void fillVector(vector<int>&);

void printVector(const vector<int>&);
//print vector
//@param vector vector<int>& - the vector to be printed

//fillVector
//@param vector<int>

//arrays are passed via reference by default?
//vectors are not, but we'll need to pass by reference
//you should ALWAYS pass vectors by reference, passing by value duplicates it, but passing them by reference saves space
//if you want to keep it from being tampered with, throw in a const modifier




int main() {
    vector<int> myVector;
    
    fillVector(myVector);
    
    printVector(myVector);
    
}

//function definition

void fillVector(vector<int>& newMyVector)
{
    cout << "type in a list of numbers (-1 to stop): ";
    int input;
    cin >> input;
    while (input != -1)
    {
        newMyVector.push_back(input);
        cin >> input;
    }
    cout << endl;
}

void printVector(const vector<int>& newMyVector)
{
    for (unsigned int i=0; i <newMyVector.size(); i++)
    {
        cout << newMyVector[i] << " ";
    }
    cout << endl;
}






