#include <iostream>
using namespace std;

class Products
{
    string name;
    int price;

public:
    void getit(void);
    void printit(void);
};
void Products ::getit(void)
{
    cout << endl
         << endl
         << "Please enter the name of the prodcut : ";
    cin >> name;
    getchar();
    cout << endl
         << "Now, please tell me the price of the " << name << " : ";
    cin >> price;
}
void Products ::printit(void)
{
    cout << endl
         << "The price of " << name << " is : " << price << endl;
}

int main()
{
    Products dailyusage[3];
    for (int i = 0; i < 3; i++)
    {
        dailyusage[i].getit();
    }
    for (int i = 0; i < 3; i++)
    {
        dailyusage[i].printit();
    }

    return 0;
}