#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <ctime>

using namespace std;

string generateComputerChoice() {
    int liczba;
    string computerChoice;
    srand(time(NULL));
    liczba = rand() % 3 + 1;
    switch (liczba) {
    case 1:
        computerChoice = "rock";
        break;
    case 2:
        computerChoice = "scissors";
        break;
    case 3:
        computerChoice = "paper";
        break;
    }
    return computerChoice;
}

int main() {
    string computerChoice = generateComputerChoice();
    string userChoice;
    cout << "Wybierz (rock, paper, scissors): ";
    cin >> userChoice;
    transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);

    cout << "Computer chose: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    }
    else if ((userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "scissors" && computerChoice == "paper") ||
        (userChoice == "paper" && computerChoice == "rock")) {
        cout << "You win!" << endl;
    }
    else {
        cout << "You lose!" << endl;
    }

    return 0;
}
