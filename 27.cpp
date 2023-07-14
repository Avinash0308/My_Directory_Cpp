#include <iostream>
using namespace std;

class Employee
{
    static int count;
    int EmployeeId;

public:
    void info(void)
    {
        cout << "Please input the employee id : ";
        cin >> EmployeeId;
        count++;
    }
    void print(void)
    {
        cout << "The id of employee " << count << " is " << EmployeeId << endl;
    }
    static int counts(){
        count++;
    }
};
int Employee ::count=10;
int main()
{
    Employee me, you, others;
    me.info();
    me.print();
    Employee :: counts();
    you.info();
    you.print();
    Employee :: counts();
    

    others.info();
    others.print();
    Employee :: counts();


    return 0;
}