// This is a practice program for the recursion

#include <iostream>

using namespace std;

int factorial(int value)
{

    if (value <= 1)
    {
        return 1;
    }

    else
    {
        return value * factorial(value - 1);
    }
}

int main()
{

    int ToFindFactorialOf;

    cout << "\n\nPlease enter the value you want to find factorial of : ";

    cin >> ToFindFactorialOf;

    int c = 1;

    for (int i = ToFindFactorialOf; i > 0; i--)
    {
        c = c * i;
    }
    cout << endl
         << endl
         << "The factorial of " << ToFindFactorialOf << " is : " << c << endl
         << endl;
    cout << endl
         << endl
         << "The factorial of " << ToFindFactorialOf << " is : " << factorial(ToFindFactorialOf) << endl
         << endl;

    return 0;
}