#include <iostream>
using namespace std;
int pow(int a, int b)
{
    int ans = 1;
    if (b == 0)
    {
        return ans;
    }
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    cout << pow(2, 2);
    return 0;
}