#include <iostream>   /* perm.cpp */
using namespace std;

template <class T>
inline
void Swap( T& a, T& b){
  T temp = a;  a = b;  b = temp;
}

// Permutation codes to permute list[ k: m ]
// simply prints the permuted sequences out list[0: m]
template<class T>
void Perm( T list[], int k, int m ){
  // generate all permutations of list[ k:m ]

  int i;
  if( k == m ){ // base case: only 1 element; simply print things out
    // cout from the beginning of the array (index 0)
    for( i = 0; i <= m; i++ ) 
      cout << list[ i ];
    cout << endl;
  } /* if( k == m ) */
  else
    for( i = k; i <= m; i++ ){
      Swap( list[ k ], list[ i ] );  // swap a[i] as the leading symbol
      Perm( list, k+1, m );  // permute with one fewer element 
      Swap( list[ k ], list[ i ] ); // restore back the original sequence 
    } /* for */
}

int main(){
  char str[] = "abcd";

  Perm( str, 0, 3 ); cout << endl;  // permute on “abcd”
  Perm( str, 0, 2 ); cout << endl;  // permute on “abc”
  Perm( str, 1, 3 );  // permute on “bcd”

  return 0;
}

