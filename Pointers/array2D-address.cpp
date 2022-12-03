#include <iostream>     /* File: array2D-address.cpp */
using namespace std;

int main() 
{
  int a[3][5] = {1,2,3,4,5,  6,7,8,9,10,  11,12,13,14,15}; 

  cout << "a[1][1] = " << a[1][1] << endl;
  cout << "a = " << a << " &a = " << &a << endl;
  cout << "a+1 = " << a+1
       << endl;  // output address: offset from a by 1*5*4 = 20 bytes
  cout << "*(a+1) = " << *(a+1) << endl; // output address
  cout << "**(a+1) = " << **(a+1)
       << "; *(a+1)[0] = " << *(a+1)[0] << endl; // output cell content
  
  cout << "a[6] = " << a[6]
       << endl;   // output address: offset from a by 6*5*4 = 120 bytes
  cout << "*(a+6) = " << *(a+6) << endl; // get the address
  cout << "**(a+6) = " << **(a+6)
       << endl; // get the content: potential segmentation fault
    
  return 0;
}
