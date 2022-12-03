#include <iostream>	/* File: enumeration-type-3.cpp */
using namespace std;

enum shapes { TEXT, LINE };
enum color { RED, GREEN, BLUE };

int main() {
	shapes shape = TEXT;
	color color = RED;

	if(shape == color)
		cout << "Equal" << endl;
	return 0;
}
