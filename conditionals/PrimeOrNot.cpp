#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number";
    cin >> a;

    int i = 2;

    while (i < a)
    {
        if (a % i == 0)
        {
            cout << "Not prime" << endl;
        }
        else
        {
            cout << "Prime" << endl;
        }
        i++;
    }
}

// basic solution using while loop