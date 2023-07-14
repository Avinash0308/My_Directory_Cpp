#include <iostream>
using namespace std;

int main()
{
    int k = 3;
    int *ptr = &k;
    cout << "the value of k is : " << *(ptr) << " and it's address is : " << ptr << endl;
    float *p = new float(23.3);
    cout << "The value of new variable is :: " << *(p) << endl;
    int *arr = new int[6];
    arr[0] = 3;
    arr[1] = 2;
    arr[2] = 21;
    arr[3] = 31;
    arr[4] = 41;
    arr[5] = 51;
    cout << "The value of arr[0] is :: " << arr[0] << endl;
    cout << "The value of arr[1] is :: " << arr[1] << endl;
    cout << "The value of arr[2] is :: " << arr[2] << endl;
    cout << "The value of arr[3] is :: " << arr[3] << endl;
    cout << "The value of arr[4] is :: " << arr[4] << endl;
    cout << "The value of arr[5] is :: " << arr[5] << endl;
    delete[] arr;
    cout << "The value of arr[0] is :: " << arr[0] << endl;
    cout << "The value of arr[1] is :: " << arr[1] << endl;
    cout << "The value of arr[2] is :: " << arr[2] << endl;
    cout << "The value of arr[3] is :: " << arr[3] << endl;
    cout << "The value of arr[4] is :: " << arr[4] << endl;
    cout << "The value of arr[5] is :: " << arr[5] << endl;
    return 0;
}