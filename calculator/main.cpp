#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char Operator;
    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> Operator;
    cout << "Enter number2: ";
    cin >> num2;

    switch (Operator)
    {
    case '+':
        cout << "Result: " << num1 + num2;
        break;
    case '-':
        cout << "Result: " << num1 - num2;
        break;
    case '*':
        cout << "Result: " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            cout << "Result: " << num1 / num2;
        else
            cout << "cannot divided by zero";

        break;

    default:
        cout << "Invalid operation";
        break;
    }
}