int max(int a, int b) { return (a > b) ? a : b; }

void print_one_row(int num_leading_spaces, int num_symbols, char symbol)
{
    for (int j = 0; j < num_leading_spaces; ++j)
        cout << ' ';
    for (int j = 0; j < num_symbols; ++j)
        cout << symbol;
    cout << endl;
}

void print_leaves(int tree_height, char tree_symbol)
{
    for (int row = 0, num_leading_spaces = tree_height;
         row < tree_height; 
         ++row, --num_leading_spaces)
        print_one_row(num_leading_spaces, 2*row+1, tree_symbol);
}

void print_trunk(int tree_width, int trunk_height,
                 int trunk_width, char trunk_symbol)
{
    int num_leading_spaces = (tree_width - trunk_width)/2;
    for (int row = 0; row < trunk_height; ++row)
        print_one_row(num_leading_spaces, trunk_width, trunk_symbol);
}
