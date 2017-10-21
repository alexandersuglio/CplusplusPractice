#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int responseSize = 20;
	const int frequencySize = 11;

	const int responses[responseSize] = { 1, 2, 6, 4, 8, 5, 9, 7, 8,
		10, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2};

	int frequency[frequencySize] = {};

	for (int answer = 0; answer < responseSize; answer++) {
		frequency[responses[answer]]++;
	}
	
	cout << "ratings from 1-10" << setw(17) << "frequency" << endl;
	
	for (int rating = 1; rating < frequencySize; rating++) {

	cout << setw(6) << rating << setw(17) << frequency[rating] << endl;
	}

	cin.get();

}