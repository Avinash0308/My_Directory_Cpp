#include <iostream>
using namespace std;
class Base
{
private:
    int a = 11;

protected:
    int b = 1;

public:
    int c = 1;
};
class Derived : public Base
{
};

int main()
{
    Base me;
    Derived ac;
    cout << ac.c << endl;
}