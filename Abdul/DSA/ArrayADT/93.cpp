#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int length;
    int size;
};
void display(struct Array ar)
{
    cout<<"Elemnts are "<<endl ; 
    for (int i = 0; i < ar.length; i++)
    {
        printf("%d ", ar.A[i]);
    }
}

int main()
{
    int n;

    struct Array arr;
    cout << "enter size\n";
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    printf("\nEnter the length of Array\n");
    arr.length = 0;

    scanf("%d", &n);

    cout << "Enter all element " << endl;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    display(arr);

    return 0;
}