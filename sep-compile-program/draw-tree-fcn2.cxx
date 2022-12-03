void print_pot(int tree_width, int pot_height, int pot_base_width, char pot_symbol)
{
    int num_leading_spaces = (tree_width - pot_base_width)/2;
    int row = pot_height, width = pot_base_width;
    while (row > 0)
    {
        print_one_row(num_leading_spaces, width, pot_symbol);
        --row; 
        ++num_leading_spaces;
        width -= 2;
    }
}

/************* The exact formulas are not important! ************
 * The leaves have 2n+1 symbols on the n-th row. 
 * The trunk is just a rectangle: width = height = 2/3 of tree's height. 
 * pot's height = 1/3 of tree's. pot's width = 2/3 of tree's. 
 */
void print_tree(int tree_height, char tree_symbol, char trunk_symbol, char pot_symbol)
{
    int tree_width = 2*tree_height + 1;
    int trunk_width = max(1, tree_width/6); 
    int trunk_height = max(1, tree_height/3);
    int pot_width = tree_width * 2/3;
    int pot_base_width = (pot_width % 2) ? pot_width : pot_width + 1;
    int pot_height = max(2, tree_height/3);

    print_leaves(tree_height, tree_symbol);
    print_trunk(tree_width, trunk_height, trunk_width, trunk_symbol);
    print_pot(tree_width, pot_height, pot_base_width, pot_symbol);
}
