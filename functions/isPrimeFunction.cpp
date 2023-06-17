#include <iostream>
using namespace std;

// 0-> Not prime
// 1-> Prime
bool isPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "The number is prime" << endl;
    }
    cout << "The number is not prime" << endl;

    return 0;
}