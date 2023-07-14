#include <iostream>
using namespace std;
template <class t>
class Avi
{
    t data;

public:
    Avi(t a)
    {
        data = a;
        set();
    }
    void set();
};
template <class t>
void Avi<t>::set(void)
{
    cout << "the value is : " << data << endl;
}

void me(int a)
{
    cout << "I am in first " << a << endl;
}
template <class t>
void me(t a)
{
    cout << "I am in second " << a << endl;
}
void me1(int a)
{
    cout << "I am in third " << a << endl;
}
int main()
{

    Avi<char> a('a');
    me(3);
    me(3.3);
    me('a');
    me1(3);
    return 0;
}