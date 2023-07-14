#include <iostream>
using namespace std;
class complex
{
    int info_1, info_2;

public:
    complex(int a = 9, int b = 8)
    {
        info_1 = a;
        info_2 = b;
        printit();
    }

    void printit()
    {
        cout << "The value of given complex no. is :: " << info_1 << " + " << info_2 << "i" << endl;
    }
};
int main()
{
    complex a;
    complex b(3);
    complex c(2, 6);
    return 0;
}