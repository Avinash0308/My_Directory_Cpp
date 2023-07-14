#include <iostream>
using namespace std;

class Students
{
protected:
    int Roll_No;

public:
    void get_roll_no(int rollnumber)
    {
        Roll_No = rollnumber;
    }
    void show_roll_no(void)
    {
        cout << "The roll no. of a student is : " << Roll_No << endl;
    }
};

class Exam : public Students
{
protected:
    float maths_marks;
    float science_marks;

public:
    void get_marks(int m, int s)
    {
        maths_marks = m;
        science_marks = s;
    }
    void show_marks(void)
    {
        cout << "Marks obtained by student in maths is : " << maths_marks << endl;
        cout << "And , the marks obtained in science is : " << science_marks << endl;
    }
};

class Result : public Exam
{

public:
    void show_result(void)
    {
        show_roll_no();
        show_marks();
        cout << "The result of the student is : " << (maths_marks + science_marks) / 2 << "%" << endl;
    }
};

int main()
{
    Result Avinash;
    Avinash.get_roll_no(23);
    Avinash.get_marks(98.0, 97.0);
    Avinash.show_result();
    return 0;
}