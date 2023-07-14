#include<iostream>
using namespace std;
template <class t1 , class t2>
float Average(t1 a , t2 b){
    return (a+b)/2.0;
}
template<class t1>
void swappit(t1 &a , t1 &b){
    t1 temp = a;
    a = b;
    b = temp;
}
int main(){
    cout<<"The average of 2.5 and 5.5 is : "<<Average(2,.5);
    float a = 3 , b = 6.7;
    swappit(a,b);
    cout<<"\nInitially the value of a and b is 3 and 6 but now the value are "<<a<<" and "<<b<<endl;
return 0;
}