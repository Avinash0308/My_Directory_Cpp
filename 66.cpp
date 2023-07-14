#include <iostream>
using namespace std;
template <class t, class u>
class hitit
{
    t a;
    u b;

public:
    hitit(t x, u y)
    {
        a = x;
        b = y;
    }
    void generalOperation()
    {
        cout << "Some general mathematical operation for given set of number are : " << endl
             << endl;
        cout << a << " + " << b << " = " << (a + b) << endl;
        cout << a << " - " << b << " = " << (a - b) << endl;
        cout << a << " * " << b << " = " << (a * b) << endl;
        cout << a << " / " << b << " = " << (a / b) << endl;
    }
};
int main()
{
    int a;
    float b;
    cout<<"This program will help you in operating some of the common mathematical operation "<<endl;
    cout<<"For doing so please tell me the first value which is integer type : ";
    cin>>a;
    cout<<"Now, please tell me the second number which is floating in nature : ";
    cin>>b;
    hitit<int, float> me(a,b);
    me.generalOperation();
    return 0;
}