#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream is_baar_pura;
    is_baar_pura.open("63.txt");
    string i_am_always_ready;
    while (is_baar_pura.eof() == 0)
    {
        getline(is_baar_pura, i_am_always_ready);
        cout << i_am_always_ready<<endl;
    }
    is_baar_pura.close();
    return 0;
}