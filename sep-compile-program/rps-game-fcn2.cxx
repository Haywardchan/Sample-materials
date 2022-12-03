/* To print game result: "DRAW!", "COMPUTER WINS!", or "PLAYER WINS!" */

void print_game_result(int computer_choice, int user_choice)
{
    if(computer_choice == user_choice)
        cout << "\tDRAW!" << endl;

    else if(computer_choice == ROCK && user_choice == SCISSORS
    	|| computer_choice == SCISSORS && user_choice == PAPER
    	|| computer_choice == PAPER && user_choice == ROCK)
        cout << "\tCOMPUTER WINS!" << endl;

    else
        cout << "\tUSER WINS!" << endl;
}
