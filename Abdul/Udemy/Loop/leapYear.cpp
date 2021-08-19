#include <iostream>
using namespace std;
int main()
{
    int yr;
    cout << " Enter a year ";
    cin >> yr;
    if (yr % 4 == 0)
    {
        if (yr % 100 == 0)
        {
            if (yr % 400 == 0)
            {
                cout << yr << " "
                     << " year is a leap year ";
            }
            else
                cout << yr << " "
                     << " year is a non leap year ";
        }
        else
            cout << yr << " "
                 << " year is a leap year ";
    }
    else
        cout << yr << " "
             << " year is a non leap year ";
    return 0;
}