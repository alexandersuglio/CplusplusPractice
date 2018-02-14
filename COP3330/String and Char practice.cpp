#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    string string1("ruby");
    cout << "string string1(''ruby''): " << string1.size() << endl;
    
    string dog = "I love dogs";
    cout << "string dog: " << dog << endl;
    
    char line = 'r';
    cout << "char line: " << line << endl;
    
    //string literal
    //automatically added null
    char name[]="ruby russell";
    cout << "char name[]: " << name[12]<< endl;
    cout << "char name[]: " << strlen(name) << endl;
    
    char first[]= {'r', 'o', 'v', '\0', 'j', 'o', '\0'};
    cout << "first[]:" << strlen(first) << endl;
    
}
