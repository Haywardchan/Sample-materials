#include <iostream>     /* File: draw-tree.cpp */
using namespace std;	

// Definition of other functions go here ...

int main()	
{
    char tree_symbol, trunk_symbol, pot_symbol;
    int tree_height;
    
    cout << "Enter the character symbols for tree, trunk, and pot: "; 
    cin >> tree_symbol >> trunk_symbol >> pot_symbol;

    cout << "Enter height of the tree (an odd integer, please): "; 
    cin >> tree_height;
    
    cout << endl << endl << endl; 
    print_tree(tree_height, tree_symbol, trunk_symbol, pot_symbol);

    return 0;
}
