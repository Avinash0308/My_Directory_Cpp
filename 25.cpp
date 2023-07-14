// This code is written to understand the nesting of member functions in classes and to learn how a private object works
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    void chk_bin();

    string s;

public:
    void read();
    void ones_complement();
    void display();
};

void binary ::read()
{
    cout << "Please enter the number : ";
    cin >> s;
    chk_bin();
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            break;
            ;
        }
        else if (i == s.length() - 1)
        {
            cout << "It is the correct binary number" << endl;
            ones_complement();
        }
    }
}

void binary ::ones_complement()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
    display();
}

void binary ::display()
{
    cout << "The 1's complement of the given binary number is : " << s << endl;
}

int main()
{
    binary b;
    b.read();

    binary c;
    c.read();

    return 0;
}