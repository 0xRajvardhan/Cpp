#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter the amount:";
    cin >> amount;

    int note100 = 0;
    int note50 = 0;
    int note20 = 0;
    int note1 = 0;

    while (amount > 0)
    {
        switch (amount)
        {
        case 100:
            note100++;
            amount -= 100;
            break;
        case 50:
            note50++;
            amount -= 50;
            break;
        case 20:
            note20++;
            amount -= 20;
            break;
        default:
            note1++;
            amount - 1;
            break;
        }
    }

    cout<<"Number of 100rs notes: "<<note100<<endl;
    cout<<"Number of 50rs notes: "<<note50<<endl;
    cout<<"Number of 20rs notes: "<<note20<<endl;
    cout<<"Number of 1rs notes: "<<note1<<endl;

    return 0;
}