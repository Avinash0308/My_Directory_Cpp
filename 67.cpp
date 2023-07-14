#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float>
class me
{
    t1 a;
    t2 b;

public:
    me(t1 a, t2 b)
    {
        this->a = a;
        this->b = b;
    }
    void let()
    {
        cout << "I am bored now doing all the thing so just showing you the sum : " << (a + b) << endl;
    }
};
int main()
{
    me<> cut(2, 3.3);
    cut.let();
    return 0;
}