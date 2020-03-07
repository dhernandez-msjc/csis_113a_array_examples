// Name: David Hernandez
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 02 - Practice with a vector

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    // seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    // pre-define min and max
    const int MIN = -5;
    const int MAX = 5;

    // declare and initialize an array with pre-filled data
    vector<int> numbers(5);

    // fill array with random values
    for (auto &number : numbers) {
        number = rand() % (MAX - MIN + 1) + MIN;
    }

    // display values from the array
    for (auto number : numbers) {
        cout << number << endl;
    }
    return 0;
}
