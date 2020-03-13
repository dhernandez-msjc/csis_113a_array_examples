// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:  https://github.com/dhernandez-msjc/csis_113a_array_examples
// Example 02 - Arrays using the array class

#include <iostream>
#include <array>
using namespace std;

int main() {
    // declare and initialize an array
    array<int, 5> numbers = {1, 3, 9, 7, 2};

    // use the for each loop to display the elements
    for (auto number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
