#include <iostream>
using namespace std;
string kangaroo(int x1, int v1, int x2, int v2)
{
    float z = (x2 - x1) / (v1 - v2);
    if (v1 > v2)
    {
        if (z == 0)
        {
            return "yes";
        }
        else
            return "no";
    }
    else
        return "no";
}

int main()
{
    int x1, x2, v1, v2;
    cin >> x1 >> x2 >> v1 >> v2;

    cout << kangaroo(x1, x2, v1, v2);

    return 0;
}