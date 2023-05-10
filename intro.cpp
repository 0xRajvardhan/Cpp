#include <iostream>
using namespace std;

int main()
{
    cout << "Namaste Duniya" << endl;

    int a = 123;
    cout << a << endl;

    char b = 'R';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float ft = 1.2;
    cout << ft << endl;

    double d = 1.23;
    cout << d << endl;

    int size = sizeof(a);
    cout << "Size of a is: " << size << endl;

    // -------------------
    float x = 2.0 / 5;
    cout << x << endl;

    // Relational Operators
    int p = 2;
    int q = 3;

    bool first = p == q;
    cout << first << endl;

    bool second = p > q;
    cout << second << endl;

    bool third = p < q;
    cout << third << endl;

    bool fourth = p >= q;
    cout << fourth << endl;

    bool fifth = p <= q;
    cout << fifth << endl;

    bool sixth = p != q;
    cout << sixth << endl;

    // Logical Operators
    int z = 0;
    cout << !z << endl;
}
