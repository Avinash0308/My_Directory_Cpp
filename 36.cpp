#include<iostream>
using namespace std;
class point{
    int a, b;
    public:
    point(int c , int x){
        a = c;
        b = x;
        printit();
    }
    void printit(){
        cout<<endl<<"The point is : ( "<<a<<" , "<<b<<" )"<<endl<<endl<<endl;
    }
};
int main(){
    point a(2,3);
    point b = point(3,5);
return 0;
}