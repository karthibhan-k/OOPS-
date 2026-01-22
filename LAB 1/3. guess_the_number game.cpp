#include <iostream>
using namespace std;
int main() {
    int numberToGuess = 42; // Predefined number to guess
    int userGuess,attempts = 0;
    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is? ";

    while (true) {
        cin >> userGuess;
        if (userGuess < 1 || userGuess > 100) {
            cout << "Please enter a number between 1 and 100." << endl;
            continue;
            attempts++;
        }
        if (userGuess < numberToGuess) {
            cout << "Too low! Try again: ";
            attempts++;
        } 
        else if (userGuess > numberToGuess) {
            cout << "Too high! Try again: ";
            attempts++;
        } 
        else {
            cout << "Congratulations! You've guessed the number!" << " in " << attempts << " attempts." << endl;
            break;
        }
    }
    return 0;
}