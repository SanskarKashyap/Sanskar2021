// insertin an element in soted array
#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};
void insert(int a, Array &arr)
{
    int i = arr.length - 1;

    while (a < arr.A[i])
    {
        arr.A[i + 1] = arr.A[i];
        i--;
    }
    arr.A[i + 1] = a;
    arr.length++;
}
int CSort(Array &arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            cout << "false  ";
            return 0;
        }
    }
    cout << "true ";
    return 1;
}
void append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
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
    Array arr = {{4, 6, 8, 19, 22, 45, 67}, 10, 7};
    insert(23, arr);
    display(arr);
    cout << CSort(arr);
    return 0;
}