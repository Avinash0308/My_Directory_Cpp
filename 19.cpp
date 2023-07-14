#include<iostream>
using namespace std;
// inline int product(int a , int b){
//     return a*b;
// }
int moneyRet(int money , const float rate = 1.08){
    return money * rate;
}
int main(){
    // int a , b;
    // cout<<"Please enter the value a : ";
    // cin>>a;
    // cout<<"Now, please enter the value b : ";
    // cin>>b;
    // cout<<endl<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b);
    int money = 199999;
    cout<<"If you will deposit Rs "<<money<<" in this bank you will get Rs "<<moneyRet(money , 1.6)<<" after an year";
   
return 0;
}