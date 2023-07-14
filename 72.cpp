#include <iostream>
#include <vector>
using namespace std;
template <class t>
void display(vector<t> vec1)
{
    if (vec1.size() == 0)
    {
        cout << "I have nothing to show you bye! " << endl;
    }
    else
    {
        for (int i = 0; i < vec1.size(); i++)
        {
            // cout << vec1[i] << " ";
            cout << vec1.at(i) << " ";
        }
        cout << endl;
    }
}
int main()
{
    float value;
    vector<float> vec;
    vector<int> vec2(4);
    vector<char> vec3(4);
    vector<char> vec4(vec3);
    vector<int> vec5(6, 3);
    vec2.push_back(23);
    vec3.push_back(23);
    display(vec);
    display(vec2);
    display(vec3);
    display(vec4);
    display(vec5);
    int size = 5;
    // cout << "Please enter the size of your vector : ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Pleases enter the value : ";
    //     cin >> value;
    //     vec.push_back(value);
    // }
    // display(vec);
    // vec.pop_back();

    // vector<float>::iterator iter = vec.begin();
    // // vec.insert(iter +1, 300, 566);
    // display(vec);
    return 0;
}