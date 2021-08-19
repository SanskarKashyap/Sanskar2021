//linear search
#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array *arr)
{
    cout << "Element Of Array" << endl;
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->A[i]);
    }
}
int search(struct Array arr, int a)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (a == arr.A[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    struct Array arr = {{5, 6, 7, 89, 2, 9, 12, 13}, 10, 8};
    cout << "\n"
         << search(arr, 89) << endl;
    display(&arr);
    return 0;
}