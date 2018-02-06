#include <iostream>

using namespace std;

class Student
{
    
private:
    int roll_number;
    int percentage;
    
public:
    Student(){
        cout << "had to use default!" << endl;
        roll_number = 0;
        percentage = 0;
    }
    
    ~Student(){
        cout << "destroyed" << endl;
    }
    
    Student(Student & obj)
    {
        roll_number = obj.roll_number;
        percentage = obj.percentage;
    }
    
    void operator = (Student & obj)
    {
        cout << "assignment operator activated!";
        roll_number = obj.roll_number;
        percentage = obj.percentage;
    }
    
    Student(int roll, int percent){
        roll_number = roll;
        percentage = percent;
    }
    
    void getRollNumber(){
        cout << "roll number " << roll_number << endl;
        
    };
    void getPercentage(){
        cout << "percentage " << percentage << endl;
    };
    
};


int main() {
    
    //Student student1;
    //student1.getRollNumber();
    
    //student1.getRollNumber();
    
    //Student student1;
    
    std::cout << "Hello World!\n";
    
    Student student2(5, 90);
    Student student3(10, 70);
    
    //Student studnedfdf(4,4);
    Student student4;
    student4 = student3;
    
    // cout << "copy constructor!" << endl;
    
    //Student student13;
    // student13.getRollNumber();
    
    
    
    //  student4.getRollNumber();
    // student4.getPercentage();
    
    //student2.getRollNumber();
    //student2.getPercentage();
    
    
}
