#include <iostream>
using namespace std;

class me
{
public:
    void greet()
    {
        cout << "hellp" << endl;
    }
};
class megain
{
public:
    void greet()
    {
        cout << "hello" << endl;
    }
};
class derived : public me, public megain
{
public:
    void greet()
    {
        me::greet();
    }
};
int main()
{
    me a;
    megain b;
    a.greet();
    b.greet();
    derived aa;
    aa.greet();
    return 0;
}