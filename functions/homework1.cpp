#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int countSetBitsInAND(int a, int b)
{
    int result = a & b;
    return countSetBits(result);
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int count = countSetBitsInAND(a, b);
    cout << "Number of set bits in (a&b) is: " << count << endl;

    return 0;
}