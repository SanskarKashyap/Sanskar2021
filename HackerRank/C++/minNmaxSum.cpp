#include <iostream>
using namespace std;

int swap(int a, int b)                   // failed code
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a, b;
    cout << "4********";                   // failed code
}

int *rearrange(int arr[], int a)
{
    for (int j = 0; j < a; j++)
    {

        cout << "1********";
        for (int k = j + 1; k < a; k++)
        {
            cout << "2********";
            if (arr[k] < arr[j])
            {
                swap(arr[k], arr[j]);                   // failed code 
                cout << "3********";
            }
        }
    }
    for (int i = 0; i < a; i++)                   // failed code
    {
        cout << arr[i];
    }

    return arr;
}

int main()
{
    int a;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)                   // failed code
    {
        cin >> A[i];
    }

    rearrange(A, a);

    return 0;
}
