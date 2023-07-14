#include <iostream>
#include <fstream>
using namespace std;
/*There are basically three classes in header file fstream and these are :-
1.> fstreambase
2.> ofstream
3.> ifstream
*/
int main()
{
    string sting = "MyNameIsAvinashAgrawalAndYouHeardItRightandyesyouagainhereitright";
    ofstream outofthebox("59.txt");
    outofthebox << sting;
    return 0;
}
