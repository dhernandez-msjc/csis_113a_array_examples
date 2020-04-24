// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 04 - Practice with a vector

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    // First we'll take a look at the old way of generating random numbers.
    // seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    // pre-define min and max
    const int MIN = -5;
    const int MAX = 5;
    const int GAP_WIDTH = 2;
    const int AMOUNT_OF_NUMBERS = 5;

    // declare and initialize an array with pre-filled data
    vector<int> numbers(AMOUNT_OF_NUMBERS);

    // fill array with random values
    for (auto &number : numbers) {
        // this simple algorithm gives us
        number = rand() % (MAX - MIN + 1) + MIN;
    }

    // format the output to fill in the blanks for a gap
    cout << setfill(' ');

    // display values from the array, will adjust if we decide on a different min and max
    cout << "Here are your random numbers between " << MIN << " and " << MAX << ": " << endl;
    for (auto number : numbers) {
        cout << setw(GAP_WIDTH) << number << endl;
    }
    return 0;
}
