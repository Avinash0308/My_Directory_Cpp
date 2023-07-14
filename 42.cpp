#include <iostream>
using namespace std;
class Employee
{
    float salary;

public:
    int id;
    Employee() {}
    Employee(int inpid)
    {
        id = inpid;
        salary = 343434;
        printit();
    }
    void printit()
    {
        cout << "The salary of employee " << id << " is " << salary << endl;
    }
};

class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    void printit()
    {
        cout << "The id is " << id << endl;
    };
    int languageCode = 9;
};
int main()
{
    Employee mai(3), tum(5);
    Programmer Avinashak(13);
    cout << Avinashak.languageCode << endl;
    Avinashak.printit();
    cout << Avinashak.id << endl;

    return 0;
}