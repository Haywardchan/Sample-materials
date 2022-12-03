#include <iostream>    /* File : constexpr-find-max.cpp */
using namespace std;

constexpr int find_max(int x, int y)
{
  if(x > y)
    return x;
  else
    return y;
}

int main()
{
  int max = find_max(20, 30);
  cout << max << endl;
  return 0;
}
