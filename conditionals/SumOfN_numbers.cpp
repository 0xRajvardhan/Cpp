#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the value of N:";
    cin >> N;

    int sum = 0;
    int i = 1;

    while (i <= N)
    {
        sum = sum + i;
        i++;
    }
        cout << "Sum of first " << N << " numbers is " << sum << endl;
}