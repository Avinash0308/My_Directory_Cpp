#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> var;
    int ele;
    for (int i = 0; i < 3; i++)
    {
        cout << "Please input the value of element " << i + 1 << " : ";
        cin >> ele;
        var.push_back(ele);
    }
    for (int i = 0; i < var.size(); i++)
    {
        cout<<var.at(i)<<endl;
    }
    var.resize(5);
    for (int i = 0; i < var.size(); i++)
    {
        cout<<var[i]<<endl;
    }
    cout<<endl<<endl<<var.front()<<endl;
    cout<<var.back();
    return 0;
}