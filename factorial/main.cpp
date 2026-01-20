#include <iostream>
using namespace std;

int main()
{
    int Has_num;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> Has_num;
    int i = Has_num;
    while (i > 0)
    {
        factorial = factorial * i;
        i--;
    }
    cout << "Factorial of number " << Has_num << " is " << factorial;
}