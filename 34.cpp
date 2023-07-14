#include<iostream>
using namespace std;

class complex{
    friend void sum(complex , complex);
    int a, b;
    public:
    complex(void);
    void printit(void){
        cout<<"your complex no is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex::complex(void){
    cout<<"Please enter the value of a : ";
    cin>>a;
    cout<<"now please enter the value of b : ";
    cin>>b;
    printit();
}
void sum (complex a1 , complex b1){
    complex w;
    w.a = a1.a + b1.a;
    w.b = a1.b + b1.b;
    w.printit();
}
int main(){
    complex mai , tu;
    sum(mai,tu);
return 0;
}