#include<iostream>
using namespace std;
int main(){
    // Understanding the operators by taking some example 

    // Firstly, seeing the logical operator
    int a = 2 , b = 3;
    cout<<"\nThe value of (a < b) && (a > b) is : "<<((a < b) && (a > b));
    cout<<"\nThe value of (a < b) || (a > b) is : "<<((a < b) || (a > b));
    cout<<"\nThe value of !(a < b) is : "<<(!(a < b));
    cout<<"\nThe value of !(a > b) is : "<<(!(a > b));

    // Now taking a look at arithmatic opetators
    cout<<"\n\n\nThe value of a + b is : "<<(a+b);
    cout<<"\nThe value of a - b is : "<<(a-b);
    cout<<"\nThe value of a * b is : "<<(a*b);
    cout<<"\nThe value of a / b is : "<<(a/b);
    cout<<"\nThe value of a % b is : "<<(a%b);
    cout<<"\nThe value of a++ is : "<<(a++);
    cout<<"\nThe value of a-- is : "<<(a--);
    cout<<"\nThe value of ++a is : "<<(++a);
    cout<<"\nThe value of --a is : "<<(--a);

    // Now moving ahead we will take a look at comparison operators
    cout<<"\n\n\nThe value of a < b is : "<<(a<b);
    cout<<"\nThe value of a > b is : "<<(a>b);
    cout<<"\nThe value of a <= b is : "<<(a<=b);
    cout<<"\nThe value of a >= b is : "<<(a>=b);
    cout<<"\nThe value of a == b is : "<<(a==b);

    // And the last one is assignment operator which is nothing and just assign the values to the variables;
    int n = a;
    a = b;
    b = n;
    cout<<"\n\n\nThe value of a is : "<<a;
    cout<<"\nThe value of b is : "<<b;
}