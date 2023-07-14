#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The real part of complex number is : " << real << endl;
        cout << "The imaginary part of complex number is : " << imaginary << endl;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex[3];
    (*ptr).setData(3, 3);
    (*ptr).getData();
    (*(ptr+1)).setData(31, -3);
    (*(ptr+1)).getData();
    (ptr+2)->setData(3,6);
    (ptr+2)->getData();

    return 0;
}