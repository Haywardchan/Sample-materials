#include <iostream>    /* File : constexpr-addition.cpp */
using namespace std;

constexpr int addition(int x, int y)
{
  return (x + y);
}

int main()
{
  const int sum = addition(10, 20);  // Evaluate at compile time
  cout << sum << endl;
  return 0;
}