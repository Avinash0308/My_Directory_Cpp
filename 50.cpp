#include <iostream>
using namespace std;
class avi
{
    int a, b;

public:
    // avi(int a1, int b1) : a(a1), b(b1)
    // avi(int a1, int b1) :b(b1), a(a1)
    //  avi(int a1, int b1) :b(b1 + a), a(a1)
    //  avi(int a1, int b1) : a(a1 ),b(b1 + a)
    avi(int a1, int b1) : a(a1), b(b1 + a)
    {
        cout << "The constructor is called" << endl;
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};
int main()
{
    avi a(3, 5);
    return 0;
}