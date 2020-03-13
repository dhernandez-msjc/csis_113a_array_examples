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
    // now lets look at doing the same thing as the previous two
    // we can predefine our vector much like our array.  Vectors however
    // can grow larger, whereas arrays are limited by their size
    vector<int> numbers  {1, 3, 5, 7, 9};

    // now lets display the array using a for-loop
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    // we can also display the contents using the container loop
    for (auto number : numbers) {
        cout << number << " ";
    }
    cout << endl << endl;

    // similarly to the class array, we can iterate backwards using the iterator
    for (auto r = numbers.rbegin(); r != numbers.rend(); ++r) {
        // notice that here we are using the * operator, in this context this is
        // known as the dereference operator. We are able to see what value r currently is
        cout << *r << " ";
    }
    cout << endl << endl;

    return 0;
}
