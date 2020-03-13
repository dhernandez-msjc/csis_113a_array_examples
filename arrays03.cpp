// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 03 - A brief intro to modern random generator (C++11)

#include <iostream>
#include <functional>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>
#include <random>
using namespace std;

int main() {
    // create constants for random numbers
    const int NUMBER_OF_DIGITS = 3;
    const int MIN_VALUE = 100;
    const int MAX_VALUE = 999;

    // setup the random generator
    default_random_engine generator;

    // seed the random generator with the current time
    generator.seed(time(nullptr));

    // setup the distribution pattern desired along with min and max
    uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

    // create a functional method to call the generator
    auto generateRandomNumber = bind(distribution, generator);

    // create constant holding hero names
    const vector<string> HERO_NAMES = {"The Flash", "Superman", "Batman", "Wonder Woman", "Vibe", "Killer Frost"};

    // create vector to hold the random numbers they will draw
    vector<int> heroRandomNumbers(HERO_NAMES.size());

    // fill the vector with the random numbers for each hero
    for(auto &number : heroRandomNumbers) {
        number = generateRandomNumber();
    }

    // determine the size of the longest name in the names vector
    int longestNameLength = 0;

    for (const auto &name : HERO_NAMES) {
        if (name.length() > longestNameLength) {
            longestNameLength = name.length();
        }
    }

    // create a border for displaying results
    const string BORDER(25, '~');

    // display the outer border for output generation
    cout << BORDER << endl;

    // display the output for each Hero
    for (int i = 0; i < HERO_NAMES.size(); ++i) {
        cout << i + 1 << ") " << setw(longestNameLength) << left << HERO_NAMES[i] << ": ";
        cout << setw(BORDER.length() - longestNameLength -  NUMBER_OF_DIGITS - 2) << right << heroRandomNumbers[i] << endl;
    }

    // display the closing border
    cout << BORDER << endl;

    return 0;
}
