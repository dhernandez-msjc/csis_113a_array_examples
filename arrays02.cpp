// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 02 - Arrays using the array class

#include <iostream>
#include <array>
using namespace std;

int main() {
    // declare and initialize an array using an object array C++11 feature
    // notice this style also limits the size of the array, however is safer than using c-style array
    // you still desginate the type, size and name of the array.
    array<int, 5> numbers = {1, 3, 9, 7, 2};

    // use the for each loop to display the elements
    for (auto number : numbers) {
        cout << number << " ";
    }
    cout << endl << endl;

    // you can update the values just as you would a c-style array
    numbers[2] = 5;

    // you can also access the value in the same way using the bracket notation
    cout << "The value at index 02: " << numbers[2] << endl << endl;

    // you can utilize the reverse  pointers of the array to print in reverses
    // notice here that i is set to the reverse beginning, and stops at the reverse end
    // this allows you to print the contents of the array backwards.
    for(auto i = numbers.rbegin(); i != numbers.rend(); ++i) {
        cout << *i << " ";
    }
    cout << endl << endl;

    return 0;
}
