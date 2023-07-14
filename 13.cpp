#include<iostream>
using namespace std;

int main(){
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cout<<"Please enter the value "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<endl<<endl<<endl;
    for (int i = 0; i < 8; i++)
    {

        cout<<"The value at place "<<i<<" is : "<<arr[i]<<endl;
    }
    
    int * p = arr;
    for (int i = 0; i < 8; i++)
    {
        cout<<"The address of arr["<<i<<"] is : "<<(int)(p+i)<<endl;
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<"The value of arr["<<i<<"] is : "<<*(++p)<<endl;
    }
    
return 0;
}