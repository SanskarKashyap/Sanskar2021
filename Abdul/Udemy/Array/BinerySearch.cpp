#include <iostream>
using namespace std;

int main()
{
    int l = 0, h, mid, key, count = 0;
    int A[] = {2, 4, 6, 8, 9, 13, 16, 19, 21, 27, 30};
    for (auto x : A)
    {
        count++;
    }
    h = count;

    cout << "Enter Key ";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            cout << " Key Found at " << mid;
            return 0;
        }

        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout<<" Key not Found " ; 
    return 0;
}