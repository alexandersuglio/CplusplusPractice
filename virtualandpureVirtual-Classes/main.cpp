#include "header.h"
#include <iostream>

using namespace std;

int main() {
	// shape shape_obj;
	four_sides foursides_obj;
	three_sides threesides_obj;

	// shape_obj.name();

	cout << endl;
	foursides_obj.name();
	cout << endl;
	threesides_obj.name();
	cout << endl;

	shape *shapePTR = &foursides_obj;
	shape *shapePTR2 = &threesides_obj;

	cout << endl;
	cout << endl;

	shapePTR->name();

	cout << endl;

	shapePTR2->name();

	// three_sides *threesides_ptr = 0;
	// threesides_ptr = & foursides_obj;

	// threesides_ptr->name();

	// derived *dptr = 0;
	// dptr = & bobj;
	// dptr->name();
}