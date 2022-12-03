template <typename T> class BST /* File: bst.h */
{
  private:
    struct BSTnode      // A node in a binary search tree
    {
      T value;
      BST left;        // Left sub-tree or called left child
      BST right;       // Right sub-tree or called right child
      BSTnode(const T& x) : value(x) { } // A copy constructor for T
      // BSTnode(const T& x) : value(x), left(), right() { } // Equivalent
      BSTnode(const BSTnode& node) = default; // Copy constructor
      // BSTnode(const BSTnode& node)         // Equivalent 
	  //     : value(node.value), left(node.left), right(node.right) { }
      ~BSTnode() { cout << "delete: " << value << endl; }
    };
    BSTnode* root = nullptr;
    
  public:
    BST() = default;           // Empty BST
    ~BST() { delete root; }    // Actually recursive
    // Shallow BST copy using move constructor 
    BST(BST&& bst) { root = bst.root; bst.root = nullptr; }

    BST(const BST& bst)  // Deep copy using copy constructor
    {
        if (bst.is_empty())
            return;

        root = new BSTnode(*bst.root);  // Recursive
    }

    bool is_empty() const { return root == nullptr; }
    bool contains(const T& x) const;
    void print(int depth = 0) const;
    const T& find_max() const; // Find the maximum value
    const T& find_min() const; // Find the minimum value

    void insert(const T&);     // Insert an item with a policy
    void remove(const T&);     // Remove an item 
};
