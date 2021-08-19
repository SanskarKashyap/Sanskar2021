#include <iostream>
using namespace std;
struct Array
{
	int *A;
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
int main()
{
	int n = 5;

	Array *arr;
	arr->A = new int[n];
	Insert(*arr,5 ,69);
	display(&arr);
	return 0;
}