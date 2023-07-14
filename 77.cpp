#include<iostream>
#include<map>
using namespace std;
void display(map<int , float> me){

    map<int, float> :: iterator iter = me.begin();
    for (iter; iter != me.end(); iter++)
    {
        cout<<"The marks obtained by the student "<<(*iter).first<<" is : "<<(*iter).second<<endl;
    }
    
}
int main(){
    map<int , float> mappy;
    cout<<"Hello there, after a long time i am here again for playing with you and making you busy in some of mine stupidity"<<endl<<"Directly , coming in to the point :- "<<endl;
    int a , aa;
    float aaa;
    cout<<"Please tell me , how many students do you have friendship with ?: ";
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cout<<"Enter the id of the student "<< i+1<<" : ";
        cin>>aa;
        cout<<"Now, enter the marks obtained by this student : ";
        cin>>aaa;
        mappy[aa] = aaa;
    }
    cout<<"Again thanks you for telling me everything about your and others personnel , as told by you the things are : "<<endl;
    // mappy.sort();
    display(mappy);
return 0;
}