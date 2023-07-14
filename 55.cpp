#include <iostream>
using namespace std;
class Base_class
{
public:
    int var_base;
    void display(void)
    {
        cout << "the value of var_base is : " << var_base << endl;
    }
};
class Dervived_class : public Base_class
{
public:
    int var_Dervived;
    void display(void)
    {
        cout << "the value of var_base is : " << var_base << endl;
        cout << "the value of var_Derived is : " << var_Dervived << endl;
    }
};
int main()
{
    Base_class *Base_class_pointer;
    Base_class base_obj;
    Dervived_class *Dervived_class_pointer;
    Dervived_class derived_obj;
    Dervived_class_pointer = &derived_obj;
    Dervived_class_pointer-> var_base = 34;
    Dervived_class_pointer-> var_Dervived = 334;
    Dervived_class_pointer-> display();
    Base_class_pointer = &derived_obj;
    Base_class_pointer -> var_base = 9;
    Base_class_pointer ->display();
    return 0;
}