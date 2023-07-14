#include <iostream>
using namespace std;

class StudyTime
{
protected:
    float hours;
    string mood;

public:
    StudyTime() {}
    StudyTime(float a, string b) : hours(a), mood(b) {}
    virtual void display(void) {cout<<"hat"<<endl;}
};

class StudyByvideo : public StudyTime
{
protected:
    string concentration;

public:
    StudyByvideo() {}
    StudyByvideo(float a, string b, string c) : StudyTime(a, b)
    {
        concentration = c;
    }
    void display(void);
};
void StudyByvideo ::display(void)
{
    cout << "The no of hours i spend in watching videos are : " << hours << endl;
    cout << "My mood while watching these videos is usually : " << mood << endl;
    cout << "The concentration whenever i watch these videos is : " << concentration << endl;
}
class StudyByText : public StudyTime
{
protected:
    string writingSpeed;

public:
    StudyByText() {}
    StudyByText(float a, string b, string c) : StudyTime(a, b)
    {
        writingSpeed = c;
    }
    void display(void);
};
void StudyByText ::display(void)
{
    cout << "The no of hours i spend in writing the Text are : " << hours << endl;
    cout << "My mood while writing these Text is usually : " << mood << endl;
    cout << "According to me my writing speed is : " << writingSpeed << endl;
}
int main()
{
    StudyTime *letsStart[2];

    StudyByvideo byvideo(4.0, "literally_good", "not_to_much_high");

    StudyByText bytext(2.0, "Not_so_good", "average_but_bad_handwriting");
    letsStart[0] = &byvideo;
    letsStart[1] = &bytext;
    letsStart[0]->display();
    letsStart[1]->display();
    return 0;
}