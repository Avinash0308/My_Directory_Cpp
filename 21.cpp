#include <iostream>
using namespace std;
int fibonacci(int value)
{
    if (value == 1 || value == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(value - 1) + fibonacci(value - 2);
    }
}
int main()
{
    int ToFindFibonacciSeriesOf;

    cout << "\n\nPlease enter the term you want to find fibonacci value of : ";

    cin >> ToFindFibonacciSeriesOf;
    int arr[ToFindFibonacciSeriesOf];
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i < ToFindFibonacciSeriesOf; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << endl
         << endl
         << "The fibonacci value of " << ToFindFibonacciSeriesOf << " is : " << arr[ToFindFibonacciSeriesOf - 1] << endl
         << endl;
    cout << endl
         << endl
         << "The fibonacci value of " << ToFindFibonacciSeriesOf << " is : " << fibonacci(ToFindFibonacciSeriesOf) << endl
         << endl;

    return 0;
}