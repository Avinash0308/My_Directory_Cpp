#include <iostream>
using namespace std;
class mai
{
protected:
    int a, b;

public:
    mai(int c, int d)
    {
        a = c;
        b = d;
        cout << "The mai constructor is called ." << endl;
    }
    void printit()
    {
        cout << "The two values are " << a << " and " << b << endl;
    }
};
class tum
{
protected:
    int a1, b1;

public:
    tum(int c1, int d1)
    {
        a1 = c1;
        b1 = d1;
        cout << "The tum constructor is called ." << endl;
    }
    void printita()
    {
        cout << "The two values are " << a1 << " and " << b1 << endl;
    }
};
class beta : public tum, public mai
{
protected:
    int aa, bb;

public:
    beta(int c1, int d1, int c, int d, int aa, int bb) : tum(c1, d1), mai(c, d)
    {
        cout << "The beta constructor is called ." << endl;
        printit();
        printita();
        cout << "The two values are " << aa << " and " << bb << endl;
    }
};
int main()
{
    beta me(1, 2, 3, 4, 5, 6);
    return 0;
}