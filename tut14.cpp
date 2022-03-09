#include <iostream>
using namespace std;
// struct employee
// {
//     int eid;      // 4
//     char favChar; // 1
//     float salary; // 4
// };
// //     or

// typedef struct employee
// {
//     int eid;
//     char name;
// }ep;
// {
//     /* data */
// };

// union money
// {
//     int rice;     // 4
//     char car;     // 1
//     float pounds; // 4
// }

int main()
{
    // struct employee chetna;
    // chetna.eid=1;
    // chetna.favChar='C';
    // chetna.salary=40000;

    // union money m1;
    // m1.rice = 24;
    // cout << m1.rice;

    enum Meal{breakfast, lunch, dinner};
    Meal m3= breakfast;
    cout<<m3<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    // cout << "The value is " << chetna.eid << endl;
    // cout << "The value is " << chetna.favChar << endl;
    // cout << "The value is " << chetna.salary << endl;
    return 0;
}