#include <iostream>    /* File : constexpr-find_max2.cpp */
using namespace std;

constexpr int find_max(int x, int y)
{
  return (x > y) ? x : y;
}

int main()
{
  int max = find_max(20, 30);
  cout << max << endl;
  return 0;
}
