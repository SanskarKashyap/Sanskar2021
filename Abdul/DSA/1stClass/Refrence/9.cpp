#include <iostream>
using namespace std;

int main()
{

    int a = 4;  // integer verible [a]
    int *p;     // pointer veriable [p]
    int &r = a; // refrence variable [r] ;  r is a nick name of a 
    p = &a;     // p stores the add of a , and poits to a 
    cout << a << endl;
    cout << *p << endl;
    cout << r << endl;

    return 0;
}