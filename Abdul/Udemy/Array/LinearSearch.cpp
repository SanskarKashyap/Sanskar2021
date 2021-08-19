#include <iostream>
using namespace std;
int main()
{
    int key;
    int A[5];
    for (int i = 0; i <= 4; i++)
    {
        cin >> A[i];
    }

    cout << " Enter Key ";
    cin >> key;
    for (int i = 0; i <= 4; i++)
    {
        if (key == A[i])
        {
            cout << "key is present at " << i;
            return 0;
        }
    }

    return 0;
}