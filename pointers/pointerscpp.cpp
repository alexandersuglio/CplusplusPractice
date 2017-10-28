#include <iostream>
#include <iomanip>
#include <string>


using namespace std;



int main() {

	int number = 5;

	int *numptr;

	numptr = &number;

	cout << "number = " << number;

	cout << endl;

	cout << "*numptr = " << *numptr;

	cout << endl;

	cout << "&number = " << &number;

	cout << endl;

	cout << "numptr = " << numptr;




	cout << endl << "---------" << endl;


	int array[5] = { 1,2,3,4,5 };

	int *arrayptr;

	arrayptr = &array[0];

	cout << "array address is " << array;

	cout << endl;

	cout << "&array address is " << &array;

	cout << endl;

	cout << "&array[0] address is " << &array[0];

	cout << endl;

	cout << "arrayptr address is " << arrayptr;

	cout << endl;

	cout << "&arrayptr address is " << &arrayptr;

	cout << endl;

	cout << "*arrayptr address is " << *arrayptr;

	cout << endl;

	char charArray[5] = { 'r','u','b','y','\0' };

	cout << setw(8) << charArray;
	cout << endl;


	char charArrayii[5] = { "ruby" };

	cout << charArrayii;

	cout << endl;

	//char charArrayiii[2] = { 'ruby' };

	//cout << charArrayiii;

		//char name[5] = { "Alex" };

	cout << "---------------------------------------------" << endl;



	char name[10];

	cout << "Enter your name below: " << endl;
	cin.getline(name, 10);

cout << "his name is " << name;
	//cout << name;
cout << endl;
cout << name;




	cin.get();

}
