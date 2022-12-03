/* Goal: To print an AVL
 * Remark: The output is the AVL rotated -90 degrees
 */

template <typename T>               /* File: avl-print.cpp */
void AVL<T>::print(int depth) const
{
    if (is_empty())                 // Base case
       return;

    root->right.print(depth+1);     // Recursion: right sub-tree

    for (int j = 0; j < depth; j++) // Print the node value
        cout << '\t';
    cout << root->value << endl;

    root->left.print(depth+1);      // Recursion: left sub-tree
}
