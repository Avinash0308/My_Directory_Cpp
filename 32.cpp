#include <iostream>
using namespace std;
class bhadwa;
class jhand
{
    int maal;

public:
    void maal_de(int samaan)
    {
        maal = samaan;
    }
    friend void total_maal(jhand, bhadwa);
};
class bhadwa
{
    int maal;

public:
    void maal_de(int samaan)
    {
        maal = samaan;
    }
    friend void total_maal(jhand, bhadwa);
};

void total_maal(jhand maal1, bhadwa maal2)
{
    cout << endl
         << endl
         << endl
         << "Jhand aur bhadwa ka judwa hota hai " << (maal1.maal + maal2.maal) << endl;
}
int main()
{
    int itnamaal, itnamaaal;
    cout << endl
         << endl
         << endl
         << endl
         << "Tu jhand ko kitna maal dega bata : ";
    cin >> itnamaal;
    cout << endl
         << "Aur bhadwa ko kitna maal dega re : ";
    cin >> itnamaaal;
    jhand maal_le;
    maal_le.maal_de(itnamaal);

    bhadwa maal_lele;
    maal_lele.maal_de(itnamaaal);

    total_maal(maal_le, maal_lele);
    return 0;
}