// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 06 - Pulling a random name from a list.

#include <iostream>
#include <functional>
#include <ctime>
#include <vector>
#include <random>
#include <string>
using namespace std;

int main() {
    // a list of random super hero names
    const vector<string> SUPER_HEROES = {
            "The Flash",
            "SuperMan",
            "Wonder Woman",
            "Batman",
            "Killer Frost",
            "Spiderman",
            "Vibe"
    };

    // create a random number generator
    default_random_engine generator;

    // seed the random number generator with the current time
    generator.seed(std::random_device{}());

    // create a uniform distribution of integers
    uniform_int_distribution<int> distribution(1, SUPER_HEROES.size());

    // create a functional to generate random numbers
    auto generateRandomIndex = bind(distribution, generator);

    // generate a random value to draw a random name from the list
    string hero = SUPER_HEROES[generateRandomIndex() - 1];

    // display the name
    cout << "Name: " << hero << endl;

    return 0;
}
