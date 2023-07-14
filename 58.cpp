#include <iostream>
using namespace std;
class Shop
{
protected:
    int ProductId;
    float ProductPrice;

public:
    Shop() {}
    Shop(int a, float b) : ProductId(a), ProductPrice(b) {}
    virtual void Display(void)=0;
};
class Weighing : public Shop
{
    float weight;

public:
    Weighing() {}
    Weighing(int a, float b, float c) : Shop(a, b) { 
        weight = c ;
    }
    void Display(void)
    {
        cout << "The Product Id is : " << ProductId << endl;
        cout << "The Price of this product is : " << ProductPrice << endl;
        cout << "And the amount of Product required is : " << weight << endl;
        cout << "So the total money required is : " << ((weight)*ProductPrice) << endl;
    }
};
class NoOfPieces : public Shop
{
    int pieces;

public:
    NoOfPieces() {}
    NoOfPieces(int a, float b, int c) : Shop(a, b) {
         pieces = c ;
    }
    void Display(void)
    {
        cout << "The Product Id is : " << ProductId << endl;
        cout << "The Price of this product is : " << ProductPrice << endl;
        cout << "And the number of pieces of Product required is : " << pieces << endl;
        cout << "So the total money required is : " << ((pieces)*ProductPrice) << endl;
    }
};
int main()
{
    Shop *pointer[2];
    Weighing Sugar(2101, 40, 2);
    NoOfPieces Soaps(2343, 10, 5);
    pointer[0] = &Sugar;
    pointer[1] = &Soaps;
    pointer[0]->Display();
    pointer[1]->Display();
    return 0;
}