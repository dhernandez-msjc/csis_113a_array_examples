// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Paper, Rock, Scissors
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <array>
using namespace std;

// determine system os =====================================================
#if defined _WIN32
    #define _clear "cls"
#else
    #define _clear "clear"
#endif

#define MAX_INPUT 1024
// =========================================================================

// function prototypes =====================================================
void clearConsole();
void clearInputStream();
void pauseConsole();
char getUserChoice();
int  checkWin();

// Program enums ------------------------------
enum ContinueGame { YES = 'y', NO = 'n'};
enum HandChoices {PAPER, ROCK, SCISSORS};

int main () {
    // create a random number generator
    default_random_engine generator;

    // seed the random number generator
    generator.seed(static_cast<unsigned >(time(nullptr)));

    // declare and initialize a list of possible choices
    const array<string, 3> PLAYABLE_HANDS {
        "Paper", "Rock", "Scissors"
    };

    // setup game players
    unsigned playerChoice = 1;
    unsigned computerChoice = 0;

    // declare and initialize
    char continueGame = YES;

    // determine if the user wishes to continue the game
    while (continueGame != NO) {
        // clear the screen and prompt the user for their choice
        clearConsole();

        for (int i = 0; i < PLAYABLE_HANDS.size(); ++i) {
            cout << i + 1 << ") " << PLAYABLE_HANDS[i] << endl;
        }

        // get user input

        // generate computer input

        // determine winner


        // prompt the user to go again
        cout << "Would you like to play again? ";
        continueGame = getUserChoice();
    }

    // clear the screen before displaying final message
    clearConsole();

    // Display closing message
    cout << "Thank you for playing!!!" << endl;
    cout << "May the evil spirits be lost and confused on your way home." << endl;

    return 0;
}

// function definitions =====================================================
void clearConsole() {
    system(_clear);
}

void clearInputStream() {
    cin.ignore(MAX_INPUT, '\n');
    cin.clear();
}

void pauseConsole() {
    cout << "Press <ENTER> to continue ...";
    clearInputStream();
}

char getUserChoice() {
    // declare variable for storage of input
    char userChoice;

    // get user input from keyboard
    cin >> userChoice;

    // force lower casing
    userChoice = static_cast<char>(tolower(userChoice));

    // clear the input buffer to avoid errors
    clearInputStream();

    // return the users selection modified
    return userChoice;
}

int  checkWin(unsigned player, unsigned computer) {
    // check if the players didn't win
    if (player == computer) {
        switch (player) {
            case PAPER:
                return computer == ROCK ? 1 : -1;
            case ROCK:
                return computer == SCISSORS ? 1 : -1;
            case SCISSORS:
                return computer == PAPER ? 1 : -1;;
        }
    }
    // otherwise return 0 that they tied
    return 0;
}
