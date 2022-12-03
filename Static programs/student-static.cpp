#include"student-static.h"      /* File: student-static.cpp */

// Globally define class static data; here, it is
// initialized by calling vector's default constructor
vector<string> Student::memory;

void Student::do_exam()
{
    if (memory.empty()) 
        cout << name << ": "<< "Huh???" << endl;
    else 
    {
        vector< string >::const_iterator p;

        for (p = memory.begin(); p != memory.end(); ++p)
    	    cout << name << ": " << *p << endl;
    }

    cout << endl;
}
