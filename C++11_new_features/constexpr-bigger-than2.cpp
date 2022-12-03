#include <iostream>    /* File : constexpr-bigger-than2.cpp */
using namespace std;

const int TEN = 10;

constexpr bool bigger_than(int x) { return x > TEN; }

int main() {
  if(bigger_than(21))
    cout << "21 is bigger than 10" << endl;
  else
    cout << "21 is not bigger than 10" << endl;
  return 0;
}
