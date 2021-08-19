#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
void display(Array &arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
void reverse(Array &arr)
{
    int *b;
    b = new int[arr.length];

    for (int i = 0; i < arr.length; i++)
    {
        b[i] = arr.A[arr.length - 1 - i];
    }
    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = b[i];
    }
}
void reverse2(Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(arr->A[i], arr->A[j]);
    }
}
int main()
{
    Array arr;
    arr = {{4, 5, 3, 78, 45, 23, 56},
           7,
           10};
    display(arr);
    reverse(arr);
    display(arr);
    reverse2(&arr);
    display(arr);

    return 0;
}