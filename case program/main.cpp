#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Character is lowercase";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Character is uppercase";
    }
    else
    {
        cout << "Special Character";
    }
}
