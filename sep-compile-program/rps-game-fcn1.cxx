/* To print out the choice picked by the computer or the user */
int print_choice(char player, int choice) // 'C' for computer and 'U' for user
{
    if (player == 'C') 
        cout << "Computer";
    else if (player == 'U') 
        cout << "User";
    else
        return -1;      // Better also print an error message

    cout << " picks ";

    if (choice == ROCK) 
        cout << "rock" << endl;
    else if (choice == PAPER) 
        cout << "paper" << endl;
    else if (choice == SCISSORS) 
        cout << "scissors" << endl;
    else
        return -1;      // Better also print an error message

    return 0;
}
