#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string sting;
    ifstream in("60.txt");
    // in >> sting;
    // cout<<sting;
    getline(in, sting);
    cout << endl
         << sting;

    getline(in, sting);
    cout << endl
         << sting;

    getline(in, sting);
    cout << endl
         << sting;

    getline(in, sting);
    cout << endl
         << sting;

    getline(in, sting);
    cout << endl
         << sting;

    getline(in, sting);
    cout << endl
         << sting;
    // ofstream out("60.txt");
    // out<<"My name is abbey kitni baar batau";

    return 0;
}