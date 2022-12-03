#include <iostream>  /* File: rps-game.cpp */
#include <cstdlib>   // Info about random number generator rand() 
using namespace std; // A more concise solution with error message is in rps-game2.cpp


int main() 
{
    int seed;	// To seed the random number generator
    int N = 67;	// Total number of data
    int n = 10;	// Total number of data to generate
    //cout << "Total number of data in the table: "; cin >> N;
    //cout << "Total number of data to generate: "; cin >> n;
    cout << "Enter the seed integer: "; cin >> seed;
    srand(seed);  // initialize random number generator 

	for (int j = 0; j < n; ++j)
        cout << rand()%N+1 << endl;
    return 0;
}
