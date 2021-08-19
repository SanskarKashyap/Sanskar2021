#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, count = 0;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin>>A[i];
    }
    

    sort(A, A + a);
    for (int i = 0; i < a; i++)
    {
        if (A[a-1] == A[i])
        {
            count++;
        }
    }
    cout << count << endl;
    // cout << A[3];

    return 0;
}