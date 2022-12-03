#include "student-non-static.h" /* File: student-non-static.cpp */

void Student::do_exam()
{
    // empty() is vector's member function to check if it is empty
    if (memory.empty()) 
        cout << name << ": "<< "Huh???" << endl;
    else 
    {
        // Like a (generalized) const pointer to vector's elements
        vector<string>::const_iterator p;

        // begin() returns the pointer to the vector's beginning
        // end() returns the pointer to the cell beyond vector's end
        for (p = memory.begin(); p != memory.end(); ++p)
    	    cout << name << ": " << *p << endl;
    }

    cout << endl;
}
