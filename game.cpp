#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber, userGuess;
    int attempts = 0;

    srand(static_cast<unsigned int>(time(0)));
    secretNumber = rand() % 100 + 1;

    cout << "🎯Number Guessing Game!" << endl;
    cout << "I have picked a number between 1 and 100." << endl;
    cout << "Can you guess the number i picked? Let's find it out!" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high! Try a smaller number.";
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try a bigger number.";
        } else {
            cout << "\nCongratulations! You guessed the number i picked in " << attempts << " attempt(s)." << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}
