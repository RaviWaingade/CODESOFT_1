#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
   
    srand(time(0));

   
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Guess the number between 1 and 100!" << endl;

    
    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess < randomNumber) {
            cout << "Too low!" << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high!" << endl;
        } else {
            cout << "Congratulations! You guessed it!" << endl;
        }
    }

    return 0;
}
