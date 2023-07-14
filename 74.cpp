#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(8);
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.size() << endl;
    vec.pop_back();
    cout << vec.at(0) << endl;
    // cout << vec.at(1) << endl;
    return 0;
}