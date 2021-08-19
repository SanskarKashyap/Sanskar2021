#include <iostream>
using namespace std;
void funB(int b ) ; 
void fun(int a)
{
    if (a > 0)
    {
        cout << a << endl;
        funB(a - 1);
    }
}
void funB(int b)
{
    if (b > 1)
    {
        cout << b << endl;
        fun(b / 2);
    }
}
int main()
{
    fun(20);

    return 0;
}