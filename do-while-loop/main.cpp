#include <iostream>
using namespace std;

int main()
{
    int Has_num;
    int Has_sum = 0;

    do
    {
        cout << "Enter a num: ";
        cin >> Has_num;
        Has_sum = Has_sum + Has_num;
    } while (Has_num != 0);

    cout << "Sum of all numbers is: " << Has_sum;
}