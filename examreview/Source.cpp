#include <iostream>

using namespace std;

void BubbleSort(int a[], int arraySize);
int factorial(int n);

int factorialIter(int );

void func();

int main() {

	for (int i = 0; i <= 10; i++) {
		cout << "Number is " << i << endl;
	}

	int const size = 7;
	int array[size] = { 3, 7, 4, 2, 8, 9, 1 };


	cout << "{ "; 
	for (int j = 0; j < size; j++) {
		cout << array[j] << " ";
	}
	cout << "}";
	cout << endl;
	cout << "--------- Bubble sort ---------" << endl;

	BubbleSort(array, size); 
	
	for (int j = 0; j < size; j++) {
		cout << array[j] << " ";
	}

	cout << endl << "--------------" << endl;

	int dog = 23;

	cout << "dog value " << dog << endl;

	cout << "dog memory address " << &dog << endl;

	dog = 45;

	cout << "dog value " << dog << endl;

	cout << "dog memory address " << &dog << endl;

	cout << endl << "--------------" << endl;


	cout << "Factorial with recursion" << endl;
	for (int z = 0; z <= 10; z++) {

		cout << z <<"!= " << factorial(z) << endl;
	}

	cout << "Factorial with iteration" << endl;

	for (int counter = 0; counter <= 10; counter++) {
		cout << counter << "!= " << factorialIter(counter) << endl;
	}



	cout << endl << "-------Static example-------" << endl;

	cout << "Calling Function :- " << endl;
	func();
	cout << "Calling Function :- " << endl;
	func();
	cout << "Calling Function :- " << endl;
	func();
	//return 0;

	cin.get();
	cin.get();
}


void BubbleSort(int a[], int arraySize) {
	int insert;
	for (int p = 1; p < arraySize; p++) {
		insert = a[p];
		int move = p;

		while ((move > 0) && (a[move - 1] > insert)) {
			a[move] = a[move - 1];
			move--;
		}
		a[move] = insert;
	}

}
 
int factorial(int n) {

	if (n == 0) 
		return 1;
	else 
		return n * factorial(n-1);
}


int factorialIter(int number) {

	int result = 1;

	for (int g = number; g >= 1; g--) {
	result *= g;

	}
	return result;
}

void func() {
 static int count = 0;
	/* value of 'count' persist between function calls
	* i.e count doesn't become 0 every time func() is called;
	* previous value of count remains alive
	*/
	count++;
	cout << "Function is called " << count << " times " << endl;
}