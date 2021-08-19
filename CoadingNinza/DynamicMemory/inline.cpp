#include <iostream>
using namespace std;
inline int max(int y, int z)   //Inline functions are used to reduce the function call overhead. 
                                //Inline function is a function that is expanded in line when it is called.
{
    int i;
    return i = (y > z) ? y : z;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << max(a, b);
}