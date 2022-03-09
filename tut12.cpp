#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int* b=&a;

    // &---> (address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // *---> (value at) Dereference Operator

    cout<<"The address at address b is "<<*b<<endl;


    //pointer to pointer
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The Value at address c is "<<*c<<endl;
    cout<<"The Value at address value_at(value_at(c)) is "<<*c<<endl;



    return 0; 
}