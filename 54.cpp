#include <iostream>
using namespace std;
class em
{
    int a;

public:
    em & set(int a)
    {
        this->a = a;
        return *this;
    }
    void get()
    {
        cout << " The value of a is : " << a << endl;
    }
};
int main()
{
    em a;
    a.set(3).get();
    
    return 0;
}