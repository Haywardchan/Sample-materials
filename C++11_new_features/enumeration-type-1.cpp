#include <iostream>	/* File: enumeration-type-1.cpp */
using namespace std;

enum shapes1 { TEXT, LINE };
enum shapes2 { TEXT, LINE };

int main() {
	shapes1 shape1 = TEXT;
	shapes2 shape2 = TEXT;

	cout << shape1 << ", " << shape2 << endl;
	return 0;
}
