#include <iostream>	/* File: enumeration-type-2.cpp */
using namespace std;

int main() {
	enum shapes { TEXT, LINE };

	shapes shape = TEXT;
	const int TEXT = 88;

	cout << shape << endl;
	return 0;
}
