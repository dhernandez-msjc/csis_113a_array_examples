// Name: David Hernandez
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 02 - Practice with a vector

#include <iostream>
#include <iomanip>
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
    const int NUMBER_OF_DIGITS = 2;
    const int AMOUNT_OF_NUMBERS = 5;

    // declare and initialize an array with pre-filled data
    vector<int> numbers(AMOUNT_OF_NUMBERS);

    // fill array with random values
    for (auto &number : numbers) {
        number = rand() % (MAX - MIN + 1) + MIN;
    }

    // format the output
    cout << setfill(' ');

    // display values from the array
    cout << "Here are your random numbers between " << MIN << " and " << MAX << ": " << endl;
    for (auto number : numbers) {
        cout << setw(NUMBER_OF_DIGITS) << number << endl;
    }
    return 0;
}
