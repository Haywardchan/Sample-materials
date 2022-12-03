#include <iostream> /* File: filecopy.cpp */
#include <fstream>
using namespace std;

int main()
{
	char ip_file[32], op_file[32];
	cout << "Enter the input filename: "; cin >> ip_file;
	ifstream ifs(ip_file, ios::in | ios::binary);
	if (!ifs)
	{ cerr << "Error: Can't open \"" << ip_file << "\"\n"; return -1; }

	cout << "Enter the output filename: "; cin >> op_file;
	ofstream ofs; ofs.open(op_file, ios::out | ios::binary);
	if (!ofs)
	{ cerr << "Error: Can't open \"" << op_file << "\"\n"; return -1; }

	// Set the get pointer to 0 offset relative to the end, i.e.,
	// set the get pointer to the end of the binary file
	ifs.seekg(0, ios::end);

	// Find the position of the get pointer, which is equivalent to
	// the size of the file (in byte)
	int size = ifs.tellg();

	// Set the get pointer to 0 offset relative to the beginning, i.e.,
	// set the get pointer to the beginning of the binary file
	ifs.seekg(0);

	char* buffer = new char[size]; // Allocate memory for the buffer
	ifs.read(buffer, size);        // Read data
	ofs.write(buffer, size);       // Write data
	delete [] buffer;              // De-allocate memory

	ifs.close(); ofs.close(); return 0;
}
