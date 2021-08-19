#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array arr)
{
    cout << "Element Of Array" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
void insert(struct Array &arr, int index, int b)
{
    if (index >= 0 && index <= arr.length)
    {

        for (int i = arr.length; i >= index; i--)
            arr.A[i] = arr.A[i - 1];
        arr.A[index] = b;
        arr.length++;
    }
    // arr.A[index] = b;
}
void Delete(int index, Array &ar)
{
    cout << " \n"
         << ar.A[index] << " is deleted " << endl;
    if (index > 0 && index < ar.length)
    {
        for (int i = index; i < ar.length; i++)
        {
            ar.A[i] = ar.A[i + 1];
        }
    }
    ar.length--;
}
int main()
{
    struct Array arr;
    cout << "Enter the size of Array : ";
    int n, ch;
    cin >> arr.size;
    arr.length = arr.size;
    cout << arr.length << endl;

    arr.A = new int[arr.size];
    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = 0;
    }

    // arr.A = (int *)malloc(arr.size * sizeof(int));
    insert(arr, 5, 69);
    display(arr);
    Delete(4, arr);
    display(arr);
    return 0;
}