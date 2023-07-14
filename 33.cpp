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
    friend void badal_maal(jhand &, bhadwa &);
};
class bhadwa
{
    int maal;

public:
    void maal_de(int samaan)
    {
        maal = samaan;
    }
    friend void badal_maal(jhand &, bhadwa &);
};

void badal_maal(jhand &maal1, bhadwa &maal2)
{
    int maal_badlo = maal1.maal;
    maal1.maal = maal2.maal;
    maal2.maal = maal_badlo;
    cout << endl
         << endl
         << endl
         << "Lekin ab jhand koo maal milega " << maal1.maal << " Aur bhadwa ko milega maal " << maal2.maal << " Samajha Bhidu" << endl;
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

    cout << "Ha bhai , pehle jhand koo maal mila tha " << itnamaal << " Aur bhadwa ko mila tha maal " << itnamaaal << endl;

    badal_maal(maal_le, maal_lele);

    return 0;
}