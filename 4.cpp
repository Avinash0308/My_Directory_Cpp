#include<iostream>
using namespace std;
int me = 33;
void me2();
int main(){
    int avi = 3;
    int me = 34;
    float a = 3.33;
    char avin = 178;
    cout<<"this is what you will get to know in some time "<<avi<<"\nAnd you will get to know about this one also "<<a<<"\nAnd this is the final one i assume for sure "<<avin;
    cout<<me;
    me2();
    bool c = false;
    cout<<c;
}
void me2(){
    cout<<"\n"<<me;
}