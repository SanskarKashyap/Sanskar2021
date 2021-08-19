#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int A[3];
    for (int i = 0; i <= 2; i++)
        cin >> A[i];

    int B[3];
    for (int i = 0; i <= 2; i++)
        cin >> B[i];

    // for (auto x : A)
    //     cout << x << endl;
    // for (auto x : B)
    //     cout << x << endl;

    int count = 0;
    int count1 = 0;
    for (int i = 0; i <= 2; i++)
    {
        if (A[i] - B[i] > 0)
        {
            // cout << A[i] << " A" << endl;
            count++;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (B[j] - A[j] > 0)
        {
            // cout << B[j] << " B" << endl;
            count1++;
        }
    }

    cout << count <<" ";
    cout << count1 << endl;

    return 0;
}