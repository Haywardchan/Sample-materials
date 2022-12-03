#include <iostream>	/* File: enum-class.cpp */
using namespace std;

int main() {
	enum class color1 { RED, GREEN, BLUE };
	enum class color2 { RED, BLACK, WHITE };
	enum class shapes { TEXT, LINE };

	const int RED = 10; // OK, different scope
	color1 x = color1::GREEN;

	// Type safe
	cout << (x == color1::RED) ? "It is Red\n" : "It is not Red\n";

	shapes p = shapes::TEXT;
	if(x == p)	// Error
		cout << "GREEN is equal to TEXT";

	cout << x << endl;	// Error
	cout << (int)x << endl;	// OK
	return 0;
}
