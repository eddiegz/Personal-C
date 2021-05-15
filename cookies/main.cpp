#include <iostream>
using namespace std;

int main()
    {
    // A factorial program to calculate n!.
    cout << "Enter a number, and we'll calculate the factorial of it.\n";
    cout << "Number: ";
    int n;
    cin >> n;

    // The result of n!. Holds the running product of multiplying 1 to n.
    int factorial;

    // Go through each number from 1 to n.
    for(int i = 1; i < n; i++)
        {
        factorial = factorial * i;
        }

    // Output the result.
    cout << n << "! is " << factorial << ".\n";

    /*
    Two noteable bugs:
    1. "factorial" is never initialized.
    2. "factorial" is muliplied from 1 to (n-1). It's not multiplied by n.
    */

    return 0;
    }