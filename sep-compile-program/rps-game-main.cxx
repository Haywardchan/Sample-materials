#include <iostream>  /* File: rps-game.cpp */
#include <cstdlib>   // Info about random number generator rand() 
using namespace std; //rps-game2.cpp: another solution with error messages

// 0/1/2 is used to represent ROCK/PAPER/SCISSORS
const int ROCK = 0, PAPER = 1, SCISSORS = 2; 

// Define the game functions here
int print_choice(char player, int choice) { ... }
void print_game_result(int computer_choice, int user_choice) { ... }

int main() 
{
    int seed;           // To seed the random number generator
    cout << "Enter an integer: "; cin >> seed;
    srand(seed);        // initialize random number generator 

    int computer_choice = rand()%3; // rand() produces an integer which is
    int user_choice = rand()%3;     // then converted to ROCK/PAPER/SCISSORS
    
    if (print_choice('C', computer_choice) != 0) return -1; // -1 $\Rightarrow$ an error
    if (print_choice('U', user_choice) != 0) return -1; // -1 signals an error
    print_game_result(computer_choice, user_choice);
    return 0;
}
