#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "The id of the product is : " << id << endl;
        cout << "And , the price of the product " << id << " is : " << price << endl
             << endl;
    }
};
int main()
{
    int p;
    float q;
    ShopItem *ptr = new ShopItem[3];
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << " Please enter the id of the product "
             << " : ";
        cin >> p;
        cout << "Now ,Please enter the price of the product " << p << " : ";
        cin >> q;

        (*(ptr + i)).setData(p, q);
    }
    cout<< endl<<endl<<endl ;

    for (int i = 0; i < 3; i++)
    {
        cout << "Details of Item No. " << (i + 1) << " is ->" << endl;
        (*(ptr + i)).getData();
    }

    return 0;
}