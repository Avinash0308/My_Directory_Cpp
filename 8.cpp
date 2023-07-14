#include<iostream>
#include<iomanip>
using namespace std;
int a =3;
int main(){
    const int a = 8 , b = 3 , as= 3;
    cout<<"The value of a is : "<<a<<endl;
    ::a=4;
    cout<<"The value of a is : "<<::a<<endl;

    //Manipulatorsa 
    cout<<"MY"<<endl<<"name"<<endl<<"is"<<endl<<"avinash"<<endl<<"agrawal"<<endl;
    cout<<endl<<"2"<<setw(2)<<"2"<<setw(2)<<"2"<<setw(2)<<"2"<<endl<<"2"<<setw(6)<<"2"<<endl<<"2"<<setw(6)<<"2"<<endl<<"2"<<setw(2)<<"2"<<setw(2)<<"2"<<setw(2)<<"2"<<setw(2);

    //precedence of operators in c++
    int c = (a*b)+(as*a)+(b*as)+(a*::a);
    cout<<endl<<"The value of a*b+as*a+b*as+a*::a is : "<<c;
}