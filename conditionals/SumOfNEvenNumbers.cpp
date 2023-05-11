#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the value of N:";
    cin >> N;

    int i = 2;
    int sum = 0;

    while (i <= N)
    {
        if (i % 2 == 0)
        {
            sum = sum + 1;
            i++;
        }
        else
        {
            i++;
        }
    }

    cout << "The sum of even numbers from 1 to N is:" << sum << endl;
}