#include <iostream>      // cast.cpp
using namespace std;

int main(){
  int a = 10, b = 3;
  float f = a/b; // implicit conversion/casting
  float f2 = (float) a/b; // C-style explicit conversion/casting of a
  float f3 = float( a/ b ); // function-style cast; same as above
  cout << f << " " << f2 << " " << f3 << " " << 
    static_cast<float>(a/b) << " " << static_cast<float>(a) / b << endl;
  
  char c = 'A';  // 'A' is 65
  int i_s = static_cast<int> (c);  // convert 'A' to its ASCII integer: OK
  int ic = (int) c; // C forceful conversion.  
  int * ipc = (int*) (&c); // C forceful conversion.  OK, but may print junk
  //  int * ip_s = static_cast<int* > (&c); // poor conversion.  Compiler not OK

  cout << c << " " << i_s << " " << ic << " " << *ipc << endl;
  cout << sizeof(c) << " " << sizeof( i_s ) << " " <<
    sizeof( ic ) << " " << sizeof( *ipc ) << " " << sizeof( ipc) << endl;

  // reinterpret_cast is dangerous.
  // Should be used with extreme caution and sparingly
  int * ipc_r = reinterpret_cast<int *> (&c); // compatible to C-style (int*) &c
  cout << *ipc_r << endl;

  // compilation error: reinterpret_cast only applies to pointer
  //  int  i_r = reinterpret_cast<int> (c); 
  
  // C++ dynamic_cast is exclusively used in inheritance and polymorphism.  
  return 0;
}
