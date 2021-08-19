#include <iostream>
using namespace std;

int Devide(int a, int b)
{
    if (b == 0)
        throw 1; // a user should ready for return as well as throw

    return a / b;
}

int main()
{
    int a = 10, b = 1, c;
    try
    {
        c = Devide(a, b);

        cout << c << endl;
    }
    catch (int e)
    {
        cout << " Devisor is 0 " << endl;
    }
    cout << "Bye " << endl;

    return 0;
}