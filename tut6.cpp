#include<iostream>
using namespace std;

// There are two types of header files:
// 1.System header files
// 2.User defined header files
// https://en.cppreference.com/w/cpp/header
int main()
{
    int a=4,b=5;
    cout<<"operatos in C++"<<endl;
    cout<<"Following are operators in C"<<endl;

    //Arithmetic: +, -, *, /, %, a++, a--, ++a, --a
    // cout<<"The value of a+b is "<<a+b<<endl;
    // cout<<"The value of a-b is "<<a-b<<endl;
    // cout<<"The value of a*b is "<<a*b<<endl;
    // cout<<"The value of a/b is "<<a/b<<endl;
    // cout<<"The value of a%b is "<<a%b<<endl;
    // cout<<"The value of a++ is "<<a++<<endl;
    // cout<<"The value of a-- is "<<a--<<endl;
    // cout<<"The value of ++a is "<<++a<<endl;
    // cout<<"The value of --a is "<<--a<<endl;

    //Assignment operators--> to assign values to variables

    //Comparison operator
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    
    return 0;
    
}