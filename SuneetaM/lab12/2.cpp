#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int a[n];
    for (int i = 0; i <= n + 1; i++)
    {
        try
        {
            if (i <= n)
            {
                cout << "Enter Element" << i + 1 << ":";

                cin >> a[i];
            }
            else
                throw i;
        }
        catch (int i)
        {
            cout << "Out of bound" << endl;
        }
    }
    return 0;
}