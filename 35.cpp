#include<iostream>
using namespace std;

class complex {
    int a , b;
    public:
    complex(int , int );
    void printit(void);
};
 complex ::complex(int a1, int b1){
    a = a1;
    b = b1;
    printit();
}
void complex :: printit(void){
    cout<<"The complex no. is : "<<a<<" + "<<b<<"i"<<endl;
}
int main(){
    complex s(109,3);
    complex as = complex(3,5);
return 0;
}