#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee avi;
    avi.setData(1, 4, 6);
    avi.d = 3;
    avi.e = 33; // struct timepass
    avi.getData();
    // {

    //     int sum(int a, int b)
    //     {
    //         return a + b;
    //     }
    // } tp;
    // int s = tp.sum(4, 3);
    // cout << s;
    return 0;
}
