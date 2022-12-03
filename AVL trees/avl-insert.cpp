/* To insert an item x to AVL tree and keep the tree balanced */

template <typename T>
void AVL<T>::insert(const T& x)
{
    if (is_empty())                // Base case
        root = new AVLnode(x);
    
    else if (x < root->value)
        left_subtree().insert(x);  // Recursion on the left sub-tree

    else if (x > root->value)
        right_subtree().insert(x); // Recursion on the left sub-tree

    balance(); // Re-balance the tree at every visited node
}
