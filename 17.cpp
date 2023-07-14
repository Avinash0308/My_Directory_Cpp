#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int multiple(int a, int b)
{
    return a * b;
}
float divide(int a, int b)
{
    return (float)a / b;
}
int modulous(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;
    cout << "Please enter the value a  : ";
    cin >> a;
    cout << "Please enter the value b  : ";
    cin >> b;
    cout << "Sum  of  given  numbers   : " << sum(a, b) << endl;
    cout << "Multiple of given numbers : " << multiple(a, b) << endl;
    cout << "Division of given numbers : " << divide(a, b) << endl;
    cout << "Modulous of given numbers : " << modulous(a, b) << endl;
    return 0;
}