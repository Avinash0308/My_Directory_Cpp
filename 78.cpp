#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;


int main(){
    int arr[] = {32,23,55,35,52};
    sort(arr , arr+5 );
    for (int i = 0; i < 5; i++)
    {
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr , arr+5 , greater<int>() );
    for (int i = 0; i < 5; i++)
    {
            cout<<arr[i]<<" ";
    }
    
return 0;
}