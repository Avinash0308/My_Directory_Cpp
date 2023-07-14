#include <iostream>
using namespace std;
int count = 0;
class my_name
{
public:
    my_name()
    {
        count++;
        cout << "the constructor is called for the " << count << " time " << endl
             << endl;
    }
    ~my_name()
    {
        count--;
        cout << "the destructor is called now for the " << count << " times" << endl
             << endl;
    }
};
int main()
{
    cout << "we are currently in the main function " << endl;
    my_name fe;
    {
        cout << "The block is now occupied by us " << endl;
        my_name fs, fd;
        cout << "Now, it's time to leave the block" << endl;
    }
    cout << "After, the long drive finally we have everything in our main function back" << endl
         << endl;
    return 0;
}