#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int * p = &a;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&a<<endl;
    cout<<*p<<endl;


    int ** s = &p;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&a<<endl;
    cout<<*p<<endl;
    cout<<s<<endl;
    cout<<*s<<endl;
    cout<<&p<<endl;
    cout<<**s<<endl;

    return 0;
}