#include <iostream>
#include <list>
using namespace std;
void display(list<int> listt)
{
    list<int>::iterator itr;

    for (itr = listt.begin(); itr != listt.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
void popout(list<int> lst){
    // list<int> :: iterator itr;
    int i1 = lst.size();
    for (int i = 0 ; i <i1; i++)
    {
        lst.pop_back();
        display(lst);
    }
    
}
int main()
{
    list<int> lst1;
    lst1.push_back(3);
    lst1.push_back(4);
    lst1.push_back(45);
    lst1.push_back(33);
    lst1.push_back(31);
    display(lst1);
    lst1.sort();
    display(lst1);
    // popout(lst1);

    // list<int> lst2(3);
    // list<int> :: iterator iter = lst2.begin();
    // // iter = lst2.begin();
    // // lst2.insert(iter,333);
    // // // iter++;
    // // lst2.insert(iter,33);
    // // // iter++;
    // // lst2.insert(iter,3);
    // // lst2.remove(0);
    // // lst2.remove(0);
    // // lst2.remove(0);
    // *iter = 4;
    // iter++;

    // *iter = 41;
    // iter++;

    // *iter = 42;
    // display(lst2);
    // lst1.merge(lst2);
    // display(lst1);
    // lst1.sort();
    // display(lst1);
    // lst1.reverse();
    // display(lst1);
    // popout(lst1);


    return 0;
}