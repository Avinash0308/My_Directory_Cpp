#include <iostream>
using namespace std;

class base1
{
protected:
    int baseint1;

public:
    void getbase1(int a)
    {
        baseint1 = a;
    }
    void show_base1(void)
    {
        cout << "The value of base 1 is : " << baseint1 << endl;
    }
};
class base2
{
protected:
    int baseint2;

public:
    void getbase2(int b)
    {
        baseint2 = b;
    }
    void show_base2(void)
    {
        cout << "The value of base 1 is : " << baseint2 << endl;
    }
};
class Derived : public base1, public base2
{
public:
    void show()
    {

        cout << "The sum of 2 bases is : " << baseint1 + baseint2 << endl;
    }
};

int main()
{
    Derived avi;
    avi.getbase1(3);
    avi.getbase2(2);
    avi.show_base1();
    avi.show_base2();
    avi.show();
    return 0;
}