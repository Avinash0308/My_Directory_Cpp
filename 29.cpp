#include <iostream>
using namespace std;

class Nothing
{
    int a, b;

public:
    void Data(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void DataBySum(Nothing c1, Nothing c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void printit()
    {
        cout << "The complex no is : " << a << " + " << b <<"i"<< endl;
    }
};

int main()
{
    Nothing q, w, r;
    q.Data(92, 3);
    q.printit();

    w.Data(19, 4);
    w.printit();

    r.DataBySum(q, w);
    r.printit();
    return 0;
}