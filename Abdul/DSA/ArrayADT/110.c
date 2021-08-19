#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int length;
    int size;
};
void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
        // cout <<  << " ";
    }
    // cout << endl;
    printf("\n");
}
void reverse(struct Array *arr)
{
    int *b;
    // b = new int[arr.length];
    b = (int *)malloc(arr->length * sizeof(int));

    for (int i = 0; i < arr->length; i++)
    {
        b[i] = arr->A[arr->length - 1 - i];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i] = b[i];
    }
}
int main()
{
    struct Array arr = {{4, 5, 3, 78, 45, 23, 56}, 7, 10};

    display(arr);
    reverse(&arr);
    display(arr);
    return 0;
}