/* Display Fibonacci series for the given number */

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    int a = 0, b = 1, next;

    cout << "Fibonacci series: ";

    for (int i = 1; i <= number; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}