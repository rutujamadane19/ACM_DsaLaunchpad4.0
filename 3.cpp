#include <iostream>
using namespace std;

int main() {
    const int Size = 5;  // Set the size of the array
    int myArray[Size];

    // Use a loop to initialize the array
    for (int i = 0; i < Size; i++) {
        myArray[i] = i * 2;  // Initialize each element with a value
    }

    // Access and print array elements
    for (int i = 0; i < Size; i++) {
        cout << myArray[i] << " ";
    }

    return 0;
}