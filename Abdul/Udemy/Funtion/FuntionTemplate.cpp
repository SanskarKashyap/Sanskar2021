#include <iostream>
using namespace std;
template <class T>
T Max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

//write a Max() function template for 2 numbers

int  main()
{
    cout << Max(10, 5) << endl;
    cout << Max(12.5f, 17.3f);
    return 0 ; 
}
