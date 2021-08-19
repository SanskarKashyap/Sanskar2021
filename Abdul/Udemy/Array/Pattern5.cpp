#include <iostream>
using namespace std;

int main()
{
    int n ,p ;
    cout << " Enter A No. ";
    cin >> p ;
    n=p/2 ; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
                cout << " * ";
            else
                cout << "   ";
        }
        for (int k = 0; k <= n; k++)
        {
            if ((i+k)<n-1)
            {
               cout<<" * " ;
            }
            
        }
        cout << endl;
    }

    return 0;
}
