#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int length;
    int size;
};
void merge(Array &X, Array &Y, Array &Z)
{
    int i = 0, j = 0, k = 0;
    Z.length = (X.length + Y.length) - 1;
    while (i < X.length && j < Y.length)
    {
        if (X.A[i] < Y.A[j])
        {
            // cout << arr.A[i] << " ";
            Z.A[k++] = X.A[i++];
        }
        else if (X.A[i] > Y.A[j])
        {
            // cout << arr1.A[i] << " ";
            Z.A[k++] = Y.A[j++];
        }
    }
    for (; i < X.length;)
    {
        Z.A[k++] = X.A[i++];
    }
    for (; j < Y.length;)
    {
        Z.A[k++] = Y.A[j++];
    }
}
void display(Array &arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main()
{
    Array arr = {{4, 5, 7, 9, 12, 45}, 6, 20};
    Array arr1 = {{2, 23, 35, 38, 89, 98}, 7, 20};
    Array arr2;
    merge(arr, arr1, arr2);
    display(arr2);

    return 0;
}