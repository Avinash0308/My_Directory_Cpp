#include <iostream>
using namespace std;
int main()
{
    cout << "This is file no. 9" << endl;
    int per;
    cout << endl
         << "plese tell the percentage you got in your 12 th examination : ";
    cin >> per;
    if ((per >= 90) && (per <= 100))
    {
        cout << endl
             << "You are on the great steps just keep it steady and stay as you are." << endl
             << endl;
    }
    else if ((per < 90) && (per >= 80))
    {
        cout << endl
             << "There is really something inside you waiting to fly just keep your momentum up and up" << endl
             << endl;
    }
    else if ((per < 80) && (per > 35))
    {
        cout << "Please don't loose your hope , you will let other understand what inside you waiting to fly and let other cry . KILL IT" << endl
             << endl;
    }
    else if (per == 0)
    {
        cout << "Saale kisne tere ko padhne diya hat , bhag , nikal chutiye" << endl
             << endl
             << endl;
    }
    else if (per > 100)
    {
        cout << "Saale tune dasvi kaise paar ki be bhag saale doobara likh areey too kya likhega tujhe to padhna hi nahi aata hoga" << endl
             << endl;
    }

    else
    {
        cout << "if the condition were not great that lets you to that bad mark , don't take it to heart but else you are damn foolish just change your profession buddy as soon as possible else you are going to get a deep dive in the hole" << endl
             << endl;
    }
    switch (per)
    {
    case 100:
        cout<<"You are literally the best student the universe has ever winessed , just fly high high and high"<<endl<<endl;
        break;
    case 90:
        cout<<"You are literally the fantastic student , just fly high high and high"<<endl<<endl;
        break;
    case 80:
        cout<<"You are on the great steps of your life just keep the things high high and high and remember you will create the new limit for whole universe"<<endl<<endl;
        break;
    case 40:
        cout<<"You are literally on the bas stage of your life please help yourself out of this situation;"<<endl<<endl;
        break;
    case 1:
        cout<<"Utha le bhagwaan utha le , mere ko nai isko utha le re baba"<<endl<<endl;
        break;
    
    default:
            cout<<"just keep the things high , you will definietly fly"<<endl<<endl;
        break;
    }

    return 0;
}