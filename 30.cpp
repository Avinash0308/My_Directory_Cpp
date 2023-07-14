#include<iostream>
using namespace std;

class Complex{
  int a , b;
  public: 
  void getit(int a1 , int a2){
      a= a1;
      b= a2;
      printit();
  }
  void printit()
    {
        cout << "The complex no is : " << a << " + " << b <<"i"<< endl;
    }
    friend Complex  sum(Complex , Complex);
};
Complex sum(Complex a3, Complex a4){
    Complex sum2;
   sum2.getit( (a3.a + a4.a ), (a3.b + a4.b));
   return sum2;
}

int main(){
    Complex a6 , a7 , a8;
    a6.getit(3,5);
    // a6.printit();
    a7.getit(32,15);
    // a7.printit();
    a8 = sum(a6,a7);
    a8.printit();
    return 0;
}