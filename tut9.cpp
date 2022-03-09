#include <iostream>
using namespace std;

int main()
{
    // *******Selection control Statement*****
    //**********1. IF...ELSE...
    int age;
    cout << "Tell me your age?" << endl;
    cin >> age;
    // // cout<<"This is tutorial 9."<<endl;
    // // return 0;

    // if (age < 18)
    // {
    //     cout << "you can not come to my party. " << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "you can come with a children pass." << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "You are not yet born." << endl;
    // }
    // else

    //     cout << "You can come to the party." << endl;

    // **********2. SWITCH STATEMENT...


    switch (age)

    {
    case 18:

        cout << "You are 18" << endl;
        break;

    case 22:
        cout << "You are 22" << endl;
        break;

    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }
    cout<<"Done with the switch case"<<endl;

    return 0;
}