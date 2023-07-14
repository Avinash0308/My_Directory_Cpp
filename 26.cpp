#include <iostream>
using namespace std;

class shop
{
private:
    int ProductId[20];
    int ProductPrice[20];
    int NoOfProduct;

public:
    void ProductInfo(void);
    void ProductInfoDisplay(void);
};

void shop :: ProductInfo(){
    cout<<"Please tell me the no of product you want to fill info about : ";
    cin>>NoOfProduct;
    for (int i = 0; i < NoOfProduct; i++)
    {
    cout<<"Please tell me the ID of the product " <<(i+1)<<" : ";
    cin>>ProductId[i];
    cout<<"What is the price of this product : ";
    cin>>ProductPrice[i];
    cout<<endl;        
    }
    ProductInfoDisplay();
}

void shop :: ProductInfoDisplay(){
    cout<<endl<<"The product list with there prices are as follows : "<<endl<<endl;
    for (int i = 0; i < NoOfProduct; i++)
    {
        cout<<"The price of the product "<<ProductId[i]<<" is : Rs "<<ProductPrice[i]<<endl;
    }
    
}
int main()
{
    shop dukaan;
    dukaan.ProductInfo();
    return 0;
}