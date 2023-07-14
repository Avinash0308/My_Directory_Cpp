#include <iostream>
using namespace std;

int main()
{
    union friends
    {
        char fname;
        int age;
        bool gfriend;
    };
    typedef union friends love;
    love anil;
    anil.fname = 'a';
    cout << "Anil's name's first character is " << anil.fname << endl;

    anil.age = 19;
    cout << "His age is " << anil.age << endl;

    anil.gfriend = 1;
    cout << "Is he your good friend " << anil.gfriend << endl;

    love him;

    him.fname = 'h';
    cout << "Himanshu's name's first character is " << him.fname << endl;

    him.age = 19;
    cout << "Himanshu age is " << him.age << endl;

    him.gfriend = 1;
    cout << "Is he your good friend " << him.gfriend << endl;

    love sur;

    sur.fname = 's';
    cout << "Suraj's name's first character is " << sur.fname << endl;

    sur.age = 20;
    cout << "Suraj age is " << sur.age << endl;

    sur.gfriend = 1;
    cout << "Is he your good friend " << sur.gfriend << endl;

    return 0;
}