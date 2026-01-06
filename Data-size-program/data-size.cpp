#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter number a: ";
    cin >> num1;
    cout << "Enter number b: ";
    cin >> num2;
    cout << "Enter number c: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Number a is largest" << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Number b is largest" << endl;
    }
    else
    {
        cout << "Number c is largest" << endl;
    }

    if (num1 < num2 && num1 < num3)
    {
        cout << "Number a is smallest" << endl;
    }
    else if (num2 < num1 && num2 < num3)
    {
        cout << "Number b is smallest" << endl;
    }
    else
    {
        cout << "Number c is smallest";
    }
}
