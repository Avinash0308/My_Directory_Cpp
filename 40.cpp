#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        cout << "No function will run " << endl;
    }
    number(int a1)
    {
        a = a1;
        display();
    }
    void display()
    {
        cout << "The value of given object is : " << a << endl;
    }
    number(number &a3)
    {
        cout << "copy constructor is called " << endl;
        a = a3.a;
        display();
    }
};
int main()
{
    number e(2), f;
    e = number(3);
    number s(e);
    s.display();
    f = number(e);
    f.display();
    f = e;
    f.display();
    return 0;
}