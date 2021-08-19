#include <iostream>
using namespace std;
int pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b % 2 == 0)
    {
        return pow(a * a, b / 2);
    }
    else
        return a * pow(a * a, b / 2);
}
int main()
{

   cout<< pow(2, 9);
    return 0;
}