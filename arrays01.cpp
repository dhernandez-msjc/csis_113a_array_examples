// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 01 - Describes the difference between initializing a standard array in C++

#include <iostream>
using namespace std;

int main() {
    // declare and initialize an array with pre-filled data
    int numbers [] = {1, 3, 9, 7, 2, 4, 8, 11};

    // display the size of the array
    cout << "Size of numbers array: " << size(numbers) << endl << endl;

    // display the list using a regular for loop
    cout << "Printing the array:  ";
    for (int i = 0; i < size(numbers); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    // change the second value in the 3rd value in the array
    numbers[2] = 0;

    // display the list using a for each loop
    cout << "Printing the array:  ";
    for (auto number : numbers) {
        cout << number << " ";
    }
    cout << endl << endl;

    return 0;
}
