// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Magic Eight Ball - Simple program which simulates the shaking of a magic eight ball.

#include <iostream>
#include <ctime>
#include <functional>
#include <string>
#include <vector>
#include <random>
#include "magicEightBallFunctions.hpp"
using namespace std;

int main() {
    // declare and initialize a vector of output messages
    const std::vector<std::string> OUTPUT_MESSAGES{
            "That sounds like a possibility",
            "Not a chance during this timeline",
            "Maybe",
            "Oh look! A squirrel"
    };

    // create border for message
    const string BORDER(45, '~');

    // create and seed the random number generator
    default_random_engine generator{random_device{}()};

    // create the function generator, remember, vector size is +1 to item index
    uniform_int_distribution<int> distribution(0, OUTPUT_MESSAGES.size() - 1);

    // creates a functional to generate values between min and max possibilities
    auto generateRandomCommentIndex = bind(distribution, generator);

    while (true) {
        // clear the console
        Hernandez::clearConsole();

        // prompt the user to enter a message
        cout << BORDER << endl;
        cout << "Enter 'exit' to exit program. " << endl;
        cout << "Ask the magic eight ball a question: " << endl;
        cout << BORDER << endl;

        // get and store user input to check if they wish to terminate program
        string userInput;
        getline(cin, userInput);

        // check if the user wants to exit program
        if (userInput == "exit") {
            break;
        }

        // prepare a storage location for the output message
        string outputMessage = OUTPUT_MESSAGES[generateRandomCommentIndex()];

        // clear the console
        Hernandez::clearConsole();

        // display the message
        cout << BORDER << endl;
        cout << "Question: " << endl;
        cout << userInput << endl;
        cout << BORDER << endl;
        cout << "The magic eight-ball says: " << endl;
        cout << outputMessage << endl;
        cout << BORDER << endl << endl;

        // pause the console
        Hernandez::pauseConsole();
    }

    // clear the screen
    Hernandez::clearConsole();

    // display exit program message
    cout << BORDER << endl;
    cout << "Thank you for playing ..." << endl;
    cout << BORDER << endl;

    return 0;
}
