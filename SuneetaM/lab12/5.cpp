#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[50];
    cout << "Enter String:";
    cin.getline(a, 50);
    int l = strlen(a);
    try
    {
        for (int i = 0; i < l; i++)
        {
            try
            {
                if (a[i] == ' ')
                {
                    cout << endl;
                    throw a[i];
                }
                else
                {
                    cout << a[i];
                }
            }
            catch (char c)
            {
                throw;
            }
        }
    }
    catch (char c)
    {
        cout << "Space entered" << endl;
    }
    return 0;
}