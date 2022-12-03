#include <iostream>  // const.cpp
using namespace std;

int main(){
  int a = 1;
  double *dptr = &a; // compilation error
  
  int i = 10;
  int * jptr = nullptr;
  const int * iptr = nullptr;

  jptr = &i;   iptr = &i; // ok

  jptr = iptr = nullptr;  // reset everything
  iptr = &i;
  jptr = iptr; // not ok; otherwise *iptr can be modified through *jptr
  // analogus to:
  // int i = 10;
  // const int & ir = i;
  // int &j = ir;
  return 1;
}
  
