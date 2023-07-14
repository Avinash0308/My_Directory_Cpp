#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int Real_Sum(complex, complex);
    int comp_sum(complex, complex);
};

class complex
{
    // friend int calculator ::Real_Sum(complex, complex);
    // friend int calculator ::comp_sum(complex, complex);
    friend class calculator;

private:
    int a, b;

public:
    void getit(int a1, int b1)
    {
        a = a1;
        b = b1;
        printit();
    }

    void printit()
    {
        cout << "The complex no is : " << a << " + " << b << "i" << endl;
    }
};

int calculator ::Real_Sum(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::comp_sum(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex p, o;
    p.getit(2, 5);
    o.getit(6, 6);

    calculator i;
    int x = i.Real_Sum(p, o);
    int z = i.comp_sum(p, o);
    cout << "The real sum of the given complex number is : " << x << endl;
    cout << "And the complex part of the given complex numbers after addition is : " << z << endl;
    return 0;
}