#include <iostream>
using namespace std;

int main()
{
    struct friends
    {
        char fname;
        int age;
        bool gfriend;
    };
    typedef struct friends love;
    love anil, him, sur;
    anil.fname = 'a';
    anil.age = 19;
    anil.gfriend = 1;
    him.fname = 'h';
    him.age = 19;
    him.gfriend = 1;
    sur.fname = 's';
    sur.age = 20;
    sur.gfriend = 1;
    cout << "Anil's name's first character is " << anil.fname << endl;
    cout << "His age is " << anil.age << endl;
    cout << "Is he your good friend " << anil.gfriend << endl;

    cout << "Himanshu's name's first character is " << him.fname << endl;
    cout << "Himanshu age is " << him.age << endl;
    cout << "Is he your good friend " << him.gfriend << endl;

    cout << "Suraj's name's first character is " << sur.fname << endl;
    cout << "Suraj age is " << sur.age << endl;
    cout << "Is he your good friend " << sur.gfriend << endl;

    return 0;
}