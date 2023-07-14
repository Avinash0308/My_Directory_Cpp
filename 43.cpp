#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata(void)
    {
        data1 = 2;
        data2 = 4;
    }
    int getdata1();

    int getdata2();
};
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

class Derived : private Base
{
    int data3;

public:
    void process()
    {
        setdata();

        data3 = data2 * getdata1();
    }

    void display()
    {
        cout << "The value of data_1 is " << getdata1() << endl;
        cout << "The value of data_2 is " << data2 << endl;
        cout << "The value of data_3 is " << data3 << endl;
    }
};
int main()
{
    Base me;
    me.setdata();
    cout << me.getdata1() << endl;
    cout << me.getdata2() << endl;
    Derived me2;
    me2.process();
    me2.display();
    return 0;
}