#include<iostream>    /* File : constexpr-fib.cpp */
using namespace std; 
  
constexpr long int fib(int n) { 
  return (n <= 1)? n : fib(n-1) + fib(n-2); 
} 
  
int main () { 
  const long int result = fib(30); // Evaluate at compile time
  cout << result << endl; 
  return 0; 
}
