#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0; // Variable to store the user's guess
    int attempts = 0;  // Counter for attempts
   
   
    cout<<"\t\t\t*************************X************************************"<<endl;

    cout << "\t\t\t\tWelcome to the Guess the Number Game!" << endl;
    cout<<"\t\t\t*************************X************************************"<<endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    // Game loop
    while (userGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
        }
        attempts++;
    }

    cout << "It took you " << attempts << " attempts to guess the number." << endl;
    return 0;
}
