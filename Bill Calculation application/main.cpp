#include <iostream>
using namespace std;

int main()
{
    int units, rate, bill;
    cout << "Enter your number of units: ";
    cin >> units;

    if (units <= 100)
    {
        rate = 10;
        bill = units * rate;
        cout << "Your electricity bill is: " << bill;
    }
    else if (units > 100 && units <= 200)
    {
        rate = 15;
        bill = units * rate;
        cout << "Your electricity bill is: " << bill;
    }
    else if (units >= 200)
    {
        rate = 20;
        bill = units * rate;
        cout << "Your electricity bill is: " << bill;
    }
    return 0;
}
