// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Paper, Rock, Scissors
#include <iostream>
#include <random>
#include <ctime>
#include <any>
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

// Program enums ------------------------------
enum ContinueGame { YES = 'y', NO = 'n'};

int main () {
    // create a random number generator
    default_random_engine generator;

    // seed the random number generator
    generator.seed(static_cast<unsigned >(time(nullptr)));

    // declare and initialize
    char continueGame = YES;

    // determine if the user wishes to continue the game
    while (continueGame != NO) {


        // prompt the user to go again
        cout << "Would you like to play again? ";
        cin >> continueGame;

        // force lower casing
        continueGame = static_cast<char>(tolower(continueGame));

        // clear the input buffer to avoid errors
        clearInputStream();
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

