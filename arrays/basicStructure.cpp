#include <iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size)
{
    cout << "printing the array " << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << "printing done " << endl;
}

int main()
{
    // declare
    int number[15];

    // accessing the array
    cout << "Value at index 14 is: " << number[14] << endl;

    int second[3] = {1, 2, 3};
    // accessing an element
    cout << "Value at index 2 is: " << second[2] << endl;

    // another one
    int third[15] = {2, 7};
    int n = 15;
    printArray(third, 15);

    cout << "Everything is fine" << endl;
}