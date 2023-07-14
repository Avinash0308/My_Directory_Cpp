#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> myMap;
    map<string, int> :: iterator iter;
    // iter = myMap.begin();
    myMap["Rohandas"] = 434;
    myMap["Das"] = 43;
    myMap["Rohan"] = 34;
    myMap["Roohandas"] = 343;
     myMap.insert( { {"Rohanna", 89}, {"Akshat", 46} } );

    for (iter  = myMap.begin();  iter != myMap.end(); iter++)
    {
        /* code */
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The max size that the map can store is : "<<myMap.max_size()<<endl;
    cout<<"The size if the map is : "<<myMap.size()<<endl;
    cout<<"Let's check whether the map is empty or not : "<<myMap.empty()<<endl;
return 0;
}