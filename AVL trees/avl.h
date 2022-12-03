template <typename T>        /* File: avl.h */
class AVL
{
  private:
    struct AVLnode
    {
        T value;
        int height;
        AVL left;            // Left subtree is also an AVL object
        AVL right;           // Right subtree is also an AVL object
        AVLnode(const T& x) : value(x), height(0) { }
		// AVLnode(const T& x) : value(x), height(0), left(), right() { }
        AVLnode(const AVLnode& node) = default; // Copy constructor
        // AVLnode(const AVLnode& node)         // Equivalent 
	    //     : value(node.value), height(node.heigjt), 
		//       left(node.left), right(node.right) { }
        ~AVLnode() { cout << "delete: " << value << endl; }		
    };

    AVLnode* root = nullptr;

    AVL& right_subtree() { return root->right; }
    AVL& left_subtree() { return root->left; }
    const AVL& right_subtree() const { return root->right; }
    const AVL& left_subtree() const { return root->left; }

    int height() const;      // Find the height of tree
    int bfactor() const;     // Find the balance factor of tree
    void fix_height() const; // Rectify the height of each node in tree
    void rotate_left();      // Single left or anti-clockwise rotation
    void rotate_right();     // Single right or clockwise rotation
    void balance();          // AVL tree balancing
    
  public:
    AVL() = default;         // Build an empty AVL tree by default
    ~AVL() { delete root; }  // Will delete the whole tree recursively!
    // Shallow AVL copy using move constructor 
    AVL(AVL&& avl) { root = avl.root; avl.root = nullptr; }	
	
	
    AVL(const AVL& avl)      // Deep copy using copy constructor
    {
        if (avl.is_empty())
            return;

        root = new AVLnode(*avl.root);  // Recursive
    }	

    bool is_empty() const { return root == nullptr; }
    const T& find_min() const;       // Find the minimum value in an AVL
    bool contains(const T& x) const; // Search an item
    void print(int depth = 0) const; // Print by rotating -90 degrees
    
    void insert(const T& x); // Insert an item in sorted order
    void remove(const T& x); // Remove an item
};
