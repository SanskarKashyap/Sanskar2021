#include <iostream>
using namespace std;
int pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
        return pow(a, b - 1) * a;
}

int main()
{
    cout<<pow(2, 9);
    return 0;
}