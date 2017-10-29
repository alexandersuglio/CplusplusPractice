#include <iostream>
//#include <string>

using namespace std;

// Function Prototypes=========================================================
// Do NOT change the signature of these function prototypes.
// If you do, your code will not compile with my altered main() function
// I suggest that you copy the prototypes below and then fill them in.
// ----------------------------------------------------------------------------
// Read in a line of text INCLUDING SPACES into a string.
// You may assume that the input will NOT exceed the maxLength available.
// Keep in mind that cin stops reading at a whitespace. See page 318.
void ReadString(char * c, int maxLength);



// Get the length of the string and store it in length
// Hint: How does C++ terminate a string? Look for that character!
void GetStringLength(char * c, int *length);

// PrintString - Just print the string in forward order using cout
void PrintString(char * const c);

 
// PrintStringBackwards - Print the string in reverse order using cout
void PrintStringBackwards(char * const c);
 
// Search the string for the test character. Return -1 if not found
int FindIndexOfCharacter(char * c, char testVal);



// Return a pointer to the character at the index given
char * GetValueAtIndex(char * const c, int index);

// Return the ascii integer value of the character at requested index
int GetIntegerValueOfIndex(char * c, int index);

/*
// Print the hexadecimal value of the character at the requested index
void PrintHexValueAtIndex(char * c, int index);

// Make the entire string uppercase
void MakeUpperCase(char * c);

// Make the entire string lowercase
void MakeLowerCase(char * c);
*/
// ============================================================================

// DO NOT REMOVE THESE COMMENTS -- comments that start with @ are actually
// commands to the assessment tool.
//@include(main)
//@addRule(commentAll)
int main()
{
	/*
	const int sizer = 19;
	char chararray[sizer] = { "jokerdog" };
	char *charptr;

	//charptr = &chararray[0];

	charptr = chararray;


	const int *sizeptr;

	sizeptr = &sizer;
	
	cout << strlen(chararray);

	cout << chararray << endl;

	cout << *charptr;

	cout << *sizeptr;

	cout << sizeptr;
	*/


	// Use these variables to test.
	// SIZE could change so make sure your code works with different sizes.
	const int SIZE = 80;
	char ca[SIZE];
	char * pc = ca;
	
	//int fPrints = 0;
	//int bPrints = 0;
	//int lengthChecks = 0;

	char test = 'X';
	int index = 0;


	int length = 0;
	// Your code below
	// =========================

	ReadString(pc, SIZE);
	cout << "Printing====\n";
	PrintString(pc);
	cout << "\n";
	cout << "Done=========" << endl;

	cout << "length of ";
	PrintString(pc);
	GetStringLength(pc, &length);
	cout << " is " << length << endl;
	cout << endl;

	cout << "Backwards======\n";
	PrintStringBackwards(pc);
	cout << "\n";
	cout << "Done=========" << endl;
	
	FindIndexOfCharacter(pc, test);
	cout << test << " index " << index << endl;

	test = 'a';
	index = 0;
	FindIndexOfCharacter(pc, test);
	cout << test << " index " << index << endl;
	








	//GetValueAtIndex(char * const c, int index);
	//GetIntegerValueOfIndex(char * c, int index);
	cin.get();


	




	// =========================
	// Your code above

	//cout << "Press ENTER";
	cin.get();
	//return 0;
}
// DO NOT REMOVE THESE COMMENTS -- these comments are actually
// commands to the assessment tool.
//@removeRule(commentAll)

void ReadString(char * c, int maxLength)
{

	cout << "Enter a string less than " << maxLength << " characters." << endl;
	// Your code here
	// ==============================
 
	cin.getline(c, 80, '\n');

	// ==============================
}



void GetStringLength(char * c, int *length)
{
//*length = static_cast<string>(c).length(); 
		
*length = strlen(c);

}




// You need to provide the rest of the functions
// See Function Prototypes at the top.

void PrintString(char * const c) {

	cout << c;

}


void PrintStringBackwards(char * const c) {

	for (int i = static_cast<string>(c).length(); i >= 0; i--) {
		cout << c[i];
	}

}

// Search the string for the test character. Return -1 if not found
int FindIndexOfCharacter(char * c, char testVal) {
	
	for (int i = 0; i < static_cast<string>(c).length(); i++) {
		
		/*
		if (testVal == c[i]){
			return c[i];
			//cout << "I love ruby ";
		}
		else {
			return -1;
		}
		*/
			return 13;
	}

	//return 0;

}


// Return a pointer to the character at the index given
char * GetValueAtIndex(char * const c, int index) {

	return "a";

}

// Return the ascii integer value of the character at requested index
int GetIntegerValueOfIndex(char * c, int index) {

	return 6;
}






/*
// Print the hexadecimal value of the character at the requested index
void PrintHexValueAtIndex(char * c, int index) {



}



// Make the entire string uppercase
void MakeUpperCase(char * c) {


}

// Make the entire string lowercase
void MakeLowerCase(char * c) {



}

*/