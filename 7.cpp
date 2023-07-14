#include<iostream>
using namespace std;
long double  i_am_global = 3;
int main(){
    int i_am_global = 8;
    cout<<"Hey! you listen , i am gloabal "<<i_am_global<<endl;
    cout<<"Hey! lier not you , i am the original global and c++ will help me solving this problem "<<::i_am_global<<endl;
    //hahahahahah
    // now lets move to the refernce variable;
    float  a = i_am_global;
    cout<<"a "<<a<<endl<<"The address of a is "<<&a<<endl<<"ANd the address of i_am_global is "<<&a<<endl<<"The address of real I am global is "<<&::i_am_global<<endl; 
    // Now lets typecast the things in my way
    // float a ;
    cout<<"Please enter the value of a : ";
    cin>>a;
    cout<<"The value of a entered is : "<<a<<endl<<"The integer value of a is "<<(int)a<<endl;
    // Now lets find the size of different variable type;
    cout<<"The size of int is : "<<sizeof(int)<<endl;
    cout<<"The size of float is : "<<sizeof(float)<<endl;
    cout<<"The size of long is : "<<sizeof(long)<<endl;
    cout<<"The size of double is : "<<sizeof(double)<<endl;
    cout<<"The size of long double is : "<<sizeof(long double)<<endl;
    cout<<"The size of char is : "<<sizeof(char)<<endl;
    cout<<"The size of unsigned char is : "<<sizeof(unsigned char)<<endl;
    cout<<"The size of i_am_global is : "<<sizeof(i_am_global)<<endl;
}