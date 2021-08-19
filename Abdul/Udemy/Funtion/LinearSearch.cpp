#include <iostream>
using namespace std;
int fun(int A[], int b, int a)
{
    for (int i = 0; i < a; i++)
    {
        if (b == A[i])
            return i+1;

        else 
            return -1 ; 
    }
    return 0;
}

int main()
{
    int a;
    cin >> a;
    int A[a];
    for (int &x : A)
        cin >> x;
    cout << "Enter a key to find its index" << endl;
    int x;
    cin >> x;
    cout << fun(A, x, a) << endl;

    return 0;
}