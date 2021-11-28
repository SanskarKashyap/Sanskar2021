#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int a[n];
    try
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter Element " << i + 1 << ":";
            cin >> a[i];
            try
            {
                if (a[i] < 0)
                {
                    throw a[i];
                }
            }
            catch (int i)
            {
                throw;
            }
        }
    }
    catch (int i)
    {
        cout << "Negative number entered" << endl;
    }
    return 0;
}