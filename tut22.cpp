#include <iostream>
#include <string>
using namespace std;

class binary
{

    string s;

public:
    void read(void);
    void chk_bin(void);
    void display(void);
    void ones_compliment(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    // OOPs - Classes and Objects
    // C++ - Initially called C with classes by straustrop
    // class-> extension of structures(in C)

    // Structure had limitations like 1. members are public and 2. no methods

    // Classes are nothing but- Structure+more
    // Classes can have methods and properties
    // Classes can make few memebers as private and few as public
    // structures in C++ are typedefed
    // You can declare objects along with class declaration

    // harry.salary=9 makes no sense if salary is private

    // Nesting of member functions

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}