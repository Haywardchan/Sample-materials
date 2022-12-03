#include <iostream>     /* File: student-non-static.h */
#include <string>
// vector is a template class in C++ Standard Template Lib (STL).
// vectors are smart arrays that automatically expand if necessary.
#include <vector>
using namespace std;

class Student
{
  private:
    string name;           // Student's name 
    vector<string> memory; // Each student has his own memory

  public:
    Student(string s) : name(s) { }

    // push_back() is vector's member function that does insertion
    void memorize(string txt) { memory.push_back(txt); }
    void do_exam();
};
