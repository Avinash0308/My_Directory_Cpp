#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;

int main(){
    ofstream please_input_the_text;
    please_input_the_text.open("62.txt");//Opening the file using a open() function
    cout<<"Please enter whatever you want to put in your text file"<<endl;
    char text[299];
    gets(text);
    please_input_the_text<<text;
    please_input_the_text.close();

    ifstream please_read_the_text;
    please_read_the_text.open("62.txt");
    string i_am_ready_to_read;
    getline(please_read_the_text,i_am_ready_to_read);
    cout<<i_am_ready_to_read;
    please_read_the_text.close();
return 0;
}