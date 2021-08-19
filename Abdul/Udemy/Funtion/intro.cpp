#include <iostream>
using namespace std;

//write a pow() function here
int pow(int a, int b)
{
    int c = 1;
    for (int i = 0; i <= b; i++)
    {
        c = c * a;
    }
    return c;
}

int main()
{
    cout << pow(2, 5);
    return 0;
}
