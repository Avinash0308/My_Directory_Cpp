#include <iostream>
using namespace std;
template <class T>
class vector
{
    T*vec1;

public:
    vector() {}
    vector(T*arr)
    {
        vec1 = new int[2];
        *(vec1 + 0) = *(arr + 0);
        *(vec1 + 1) = *(arr + 1);
    cout<<"The value of 1 is : "<<(*(vec1))<<"\nand the value of b is : "<<(*(vec1+1))<<endl;
    }
};
int main()
{
    // Now i don't know what to do , that's why i am leaving the code here only;
    // Now i know what to do , so i am back;
    int arr[2];
    int *ptr = arr;
    arr[0] = 2;
    arr[1] = 5;
    vector<int> myvec(ptr);
    // cout<<(*(ptr))<<"     "<<(*(ptr+1));

    return 0;
}