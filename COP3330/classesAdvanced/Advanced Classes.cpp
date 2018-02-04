#include <iostream>

using namespace std;

class ruby{
public:
    ruby();
    ruby(int);
    int returnage(int);
    string name(string);
    void addTwoagebyRef(int&);
};

ruby::ruby(){
}


ruby::ruby(int dob){
    cout << "was born in " << dob;
}

int ruby::returnage(int age){
    return age;
}

string ruby::name(string test){
    return test;
}

void ruby::addTwoagebyRef(int &years){
    years = years + 2;
}

int main() {
    int age = 24;
    
    
    ruby x;
    
    cout << x.returnage(6);
    cout << x.returnage(7);
    cout << x.returnage(8);
    cout << endl;
    
    cout << x.name("Alex");
    
    x.addTwoagebyRef(age);
    cout << endl;
    cout << age;
    
    ruby ajsbirthday(1992);
    ruby jsbirthday(1951);
    
}
