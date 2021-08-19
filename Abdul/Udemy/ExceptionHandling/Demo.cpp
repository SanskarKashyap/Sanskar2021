#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 1, c;
    try
    {
        if (b == 0)
            throw 1;
        else
            c = a / b;
        cout << c << endl;
    }
    catch (int e)
    {
        cout << " Devisor is 0 " << endl;
    }
    cout << "Bye " << endl;

    return 0;
}