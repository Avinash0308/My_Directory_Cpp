#include <iostream>
using namespace std;
int main()
{
    cout << endl
         << endl
         << endl
         << "All prime numbers between 1 and 100 are : 1 , 2 ,";
    for (int i = 2; i <= 100; i++)
    {
        for (int a = 2; a < i; a++)
        {
            if ((i % a == 0))
            {
                break;
            }
            else if (a == i - 1)
            {
                cout << " " << i << " ,";
            }
        }
    }
    cout << "....................ends";
    int i = 3, a = 2;

    cout << endl
         << endl
         << endl
         << "All prime numbers between 1 and 100 are : 1 , 2 ,";
    do
    {

        if ((i % a == 0))
        {
            i++;
            a = 2;
            continue;
        }
        else if (a == (i - 1))
        {
            cout << " " << i << " ,";
            i++;
            a = 2;
            continue;
        }
        else
        {
            a++;
        }

    } while (i < 101);
    cout << "....................ends";

    i = 3, a = 2;

    cout << endl
         << endl
         << endl
         << "All prime numbers between 1 and 100 are : 1 , 2 ,";

    while (i < 101)
    {
        if ((i % a == 0))
        {
            i++;
            a = 2;
            continue;
        }
        else if (a == (i - 1))
        {
            cout << " " << i << " ,";
            i++;
            a = 2;
            continue;
        }
        else
        {
            a++;
        }
    }
    cout << "....................ends";
    cout << endl
         << endl
         << endl;
    return 0;
}
