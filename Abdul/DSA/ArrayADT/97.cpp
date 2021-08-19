#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
void append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}
void display(struct Array *arr)
{
    cout << "Element Of Array" << endl;
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->A[i]);
    }
}
void insert(struct Array *arr, int index, int b)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i >= index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = b;
        arr->length++;
    }
    arr->A[index] = b;
}
int Delete(struct Array *arr, int a)
{
    int x = arr->A[a];
    for (int i = a; i < arr->length - 1; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
    return x;
}
int main()
{
    struct Array arr = {{2, 4, 5, 6, 7, 8}, 6, 10};

    // append(&arr, 10);
    // insert(&arr, 3, 69);
    cout << Delete(&arr, 4)<<endl;
    display(&arr);

    return 0;
}