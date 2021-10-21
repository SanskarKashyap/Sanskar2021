#include <iostream>
#include <iomanip>
using namespace std;

void cinfun(int *p, int a)
{
    for (int i = 0; i < a; i++)
    {
        cin >> p[i];
    }
}
void coutfun(int *p, int a)
{
    float pos = 0, neg = 0, zer = 0;
    for (int i = 0; i < a; i++)
    {
        if (p[i] > 0)
        {
            pos++;
        }
        else if (p[i] < 0)
        {
            neg++;
        }
        else
            zer++;
    }
    cout << "\n"
         << setprecision(6) << pos / a << " " << neg / a << " " << zer / a << "\n";
}

int main()
{
    int a;
    cin >> a;
    int *p = new int[a];
    cinfun(p, a);
    coutfun(p, a);

    return 0;
}