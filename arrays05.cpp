// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 05 - Simple Algorithms involving vectors/arrays

#include <iostream>
#include <random>
#include <ctime>
#include <functional>
#include <vector>
#include <string>

using namespace std;

int main() {
    // create a constant for the desired size of the vector
    const int VECTOR_SIZE = 5;

    // create constants for min and max values to generate
    const int MIN = 1;
    const int MAX = 99;

    // create a random number generator
    default_random_engine generator;

    // seed the random number generator with the current time
    generator.seed(static_cast<unsigned>(time(nullptr)));

    // create a vector that will hold our random values
    vector<int> numbers(VECTOR_SIZE);

    // create a uniform distribution of integers
    uniform_int_distribution<int> distribution(MIN, MAX);

    // create a functional to generate random numbers
    auto generateRandomNumber = bind(distribution, generator);

    // (1) FILL vector/array with random integers ================================================
    for (auto &number : numbers) {
        number = generateRandomNumber();
    }

    // (2) Display the values of the vector linearly =============================================
    // keep track of index
    unsigned index = 0;

    // display the opening brace
    cout << "[";

    // iterate through each value in the numbers vector/array
    for (auto &number : numbers) {
        // display the value
        cout << number;

        // create a separator
        const string SEPARATOR = ", ";

        // determine if the current number is the last value, if not, add in delimiter and space
        if (index < numbers.size() - 1) {
            cout << SEPARATOR;
            index++;
        }
    }

    // end the loop and close the set
    cout << "]" << endl;



    return 0;
}
