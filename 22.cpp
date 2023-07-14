#include<iostream>
using namespace std;
float Area(int a , int b){
    return (3.14*a*a) + (2*3.14*a*b);
}
float Area(int a ){
    return 6*a*a;
}
float Area(int a , int b , int c){
    return 2 * (a*b + b*c + c*a);
}
int main(){
    cout<<"The area of cylinder having dimensions 4 radius and 6 hieght is : "<<Area(4,6)<<endl;
    cout<<"The area of Cube having dimensions 4 is : "<<Area(4)<<endl;
    cout<<"The area of cuboid having dimensions 4 base and 6 hieght and 5 length is : "<<Area(4,6,5)<<endl;
return 0;
}