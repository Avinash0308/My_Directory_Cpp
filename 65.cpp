#include <iostream>
using namespace std;
template <class t>
class vector
{
private:
    t *arr;
    int a;

public:
    vector() {}
    vector(int k)
    {
        a = k;
        arr = new t [a];
        for (int i = 0; i < a; i++)
        {
            cout << "Please input value no " << (i + 1) << " : ";
            cin >> *(arr + i);
        }
    }
    t dotProduct(vector v)
    {
        t d = 0;
        for (int i = 0; i < a; i++)
        {
            d += arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<int> a1(3);
    vector<int> a2(3);
    float a = a1.dotProduct(a2);
    cout << "The answer is : " << a << endl;
    return 0;
    }