#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Find Multiplication Table ";
    cin >> x;
    for (int i = 1; i < 11; i++)
    {
        cout << x << " X " << i << " = " << x * i << endl;
    }

    return 0;
}