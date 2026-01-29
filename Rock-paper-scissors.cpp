#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int userChoice, compChoice;

    cout << "===== Rock Paper Scissors Game =====\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> userChoice;

    compChoice = rand() % 3 + 1;

    cout << "Computer choice: ";
    if (compChoice == 1) cout << "Rock\n";
    else if (compChoice == 2) cout << "Paper\n";
    else cout << "Scissors\n";

    if (userChoice == compChoice)
        cout << " It's a Draw!\n";
    else if ((userChoice == 1 && compChoice == 3) ||
             (userChoice == 2 && compChoice == 1) ||
             (userChoice == 3 && compChoice == 2))
        cout << " You Win!\n";
    else
        cout << " You Lose!\n";

    return 0;
}
