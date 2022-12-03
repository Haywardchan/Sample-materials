#include <iostream>    /* File : constexpr-prime-bigger-than.cpp */
using namespace std;

const int TEN = 10;

bool is_prime_recursive(int x, int c) {
  return (c*c > x) ? true : (x % c == 0) ? false : is_prime_recursive(x, c+1);
}

bool is_prime(int x) { return (x <= 1) ? false : is_prime_recursive(x, 2); }

constexpr bool prime_bigger_than(int x) { return is_prime(x) && x > TEN; }

int main() {
  if(prime_bigger_than(13))
    cout << "13 is a prime number and bigger than 10" << endl;
  else
    cout << "13 is either not a prime number or smaller than 10" << endl;
  return 0;
}
