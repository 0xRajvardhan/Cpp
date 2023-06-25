#include <iostream>
using namespace std;

// HOLD
void printArray()
{
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
    int third[15] = {1, 2, 3};
    int n = 15;

    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    cout << "Everything is fine" << endl;
}