#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
        printit();
    }
    Complex(int d)
    {
        a = d;
        b = 0;
        printit();
    }
    Complex()
    {
        a = 0;
        b = 0;
        printit();
    }
    void printit(void)
    {
        cout << "The complex no. is : " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    Complex(2);
    Complex();
    return 0;
}