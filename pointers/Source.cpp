#include <iostream>
#include <iomanip>

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


// Print the hexadecimal value of the character at the requested index
void PrintHexValueAtIndex(char * c, int index);

// Make the entire string uppercase
void MakeUpperCase(char * c);

// Make the entire string lowercase
void MakeLowerCase(char * c);
 
// ============================================================================

// DO NOT REMOVE THESE COMMENTS -- comments that start with @ are actually
// commands to the assessment tool.
//@include(main)
//@addRule(commentAll)
int main()
{
	
// Use these variables to test.
// SIZE could change so make sure your code works with different sizes.
const int SIZE = 80;
char ca[SIZE];
char * pc = ca;
int length = 0;
int fPrints = 0;
int bPrints = 0;
int lengthChecks = 0;

cout << "Enter a string less than " << SIZE << " characters." << endl;

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

char test = 'X';
int index = 0;
index = FindIndexOfCharacter(pc, test);
cout << test << " index " << index << endl;

test = 'a';
index = 0;

index = FindIndexOfCharacter(pc, test);
cout << test << " index " << index << endl;
	
char oldChar = 'S';
char newChar = 'R';
char * cPtr;

index = FindIndexOfCharacter(pc, oldChar);
cout << oldChar << "-->" << newChar << "\n";
cPtr = GetValueAtIndex(pc, index);
*cPtr = newChar;
PrintString(pc);
cout << endl;	

for (int i = 0; i < length; ++i)
{
int i_ascii = GetIntegerValueOfIndex(pc, i);
cout << pc[i] << "=" << i_ascii << endl;
}
for (int i = 0; i < length; ++i)
{
cout << "hex: ";
PrintHexValueAtIndex(pc, i);
}

cout << endl;

MakeUpperCase(pc);
PrintString(pc);
cout << endl;
MakeLowerCase(pc);
PrintString(pc);

cin.get();
cin.get();

}
// DO NOT REMOVE THESE COMMENTS -- these comments are actually
// commands to the assessment tool.
//@removeRule(commentAll)

void ReadString(char * c, int maxLength)
{

	//cout << "Enter a string less than " << maxLength << " characters." << endl;
	// Your code here
	// ==============================
 
cin.getline(c, maxLength, '\n');

	// ==============================
}

void GetStringLength(char * c, int *length)
{
	
*length = strlen(c);
}

// You need to provide the rest of the functions
// See Function Prototypes at the top.

void PrintString(char * const c) {

cout << c;

}


void PrintStringBackwards(char * const c) {

for (int i = static_cast<string>(c).length() -1; i >= 0; i--) {
cout << c[i];
}

}

// Search the string for the test character. Return -1 if not found
int FindIndexOfCharacter(char * c, char testVal) {
	

for (int i = 0; i < static_cast<string>(c).length(); i++) {
		
if (testVal == c[i])
return i;
			
}

return -1;
}


// Return a pointer to the character at the index given
char * GetValueAtIndex(char * const c, int index) {
	char * cPtr = &c[index];
	return cPtr;	
}

// Return the ascii integer value of the character at requested index
int GetIntegerValueOfIndex(char * c, int index) {
return int(c[index]);
}

// Print the hexadecimal value of the character at the requested index
void PrintHexValueAtIndex(char * c, int index) {

cout << hex << int(c[index]) << endl;
}


// Make the entire string uppercase
void MakeUpperCase(char * c) {
for (int i = 0; i < static_cast<string>(c).length(); i++) {
c[i] = toupper(c[i]);
}
}

// Make the entire string lowercase
void MakeLowerCase(char * c) {

for (int i = 0; i < static_cast<string>(c).length(); i++) {
c[i] = tolower(c[i]);
}
}
 