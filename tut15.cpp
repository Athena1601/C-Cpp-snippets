#include <iostream>
using namespace std;


// Function prototype
//type function-name(arguments)-->Acceptable
//int sum(int a,int b)--> not acceptable
//int sum(int,int)--> acceptabe
int sum(int a, int b)
{
    // Formal parameters  a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}
int main()
{
    int num1, num2;
    cout << "Ënter the first number " << endl;
    cin >> num1;
    cout << "Ënter the second number " << endl;
    cin >> num2;
    //num1 and num2 are actual parameters
    cout << "The sum is " << sum(num1, num2);

    return 0;
}

