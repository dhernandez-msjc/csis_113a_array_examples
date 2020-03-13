// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 01 - Describes the difference between initializing a c-style array

#include <iostream>
using namespace std;

int main() {
    // declare and initialize a c-style array with pre-filled data
    int numbers [] = {1, 3, 9, 7, 2, 4, 8, 11};

    // You can determine the size of the array utilizing the size( ) function
    cout << "Size of numbers array: " << size(numbers) << endl << endl;

    // access a single element within the array
    cout << "First Value: " << numbers[0] << endl << endl;

    // Since the elements of an array are contiguous, we can use a for-loop to
    // present each index in the array in order to access all or certain elements
    cout << "Printing the array:  ";
    for (int i = 0; i < size(numbers); ++i) {
        // displays the value in the array to the console, linearly
        // Accessing an element is accomplished by using the name of the array
        // and the index using [ ] notation.
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    // change the second value in the 3rd value in the array
    // we can also access and reassign a value using the bracket
    // notation as well as the assignment operator.
    numbers[2] = 0;

    // The foreach loop
    // this loop is a special loop that increases readability.  This loop
    // however iterates through the entire contents.  The code reads
    // "let number represent a copy of the value in the array" this means
    // that this manner we cannot use it to update values.
    cout << "Printing the array:  ";
    for (auto number : numbers) {
        cout << number << " ";
    }
    cout << endl << endl;

    return 0;
}

