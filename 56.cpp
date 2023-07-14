#include<iostream>
using namespace std;
class Base{
    public:
    int a = 9;
    virtual void display(void){
        cout<<" 1 , The value of a is : "<<a<<endl;
    }
};
class Derived : public Base{
    public:
    int b = 3;
    void display(void){
        cout<<"2 , The value of a is "<<a<<endl;
        cout<<"2 , The value of b is "<<b<<endl;
    }
};
int main(){
    Base * Bptr;
    Derived derived;
    Bptr = &derived;
    Bptr->display();
return 0;
}