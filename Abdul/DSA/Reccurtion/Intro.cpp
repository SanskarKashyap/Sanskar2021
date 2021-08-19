#include <iostream>

using namespace std;
void fun(int n)
{
    if (n > 0)
    {
        fun(--n);
        cout << n << endl;
    }
}

int main()
{
    fun(7);
    return 0;
}