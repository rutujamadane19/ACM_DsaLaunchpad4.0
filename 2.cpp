#include <iostream>
using namespace std;

int main() {
    // Initialize an array without specifying the size
    int myArray[] = {1, 2, 3, 4};

    // Calculate the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Access and print array elements
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    return 0;
}