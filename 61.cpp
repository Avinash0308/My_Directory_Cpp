#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream daaldo("61.txt");//Opening this file using a contructor
    daaldo<<"This is really heart whelming one someone trust on you and you completely succeed in his trust and make him and yourself proud and it is really a great and lets do this again achievement also , so let's get some heat on . yeah!";
    daaldo.close();
    string st;
    ifstream lelo("61.txt");
    getline(lelo,st);
    // lelo>>st;
    cout<<st;
return 0;
}