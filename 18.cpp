#include <iostream>
using namespace std;
void swapit(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "The value of a is " << a << " And the value of b is " << b << endl;
}
void swapPoin(int *a , int * b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void swapRef(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int a = 3, b = 6;
    cout << "The value of a is " << a << " And the value of b is " << b << endl;
    swapit(a, b);
    swapPoin(&a,&b);
    cout << "The value of a is " << a << " And the value of b is " << b << endl;
    swapRef(a,b);
    cout << "The value of a is " << a << " And the value of b is " << b << endl;

    return 0;
}