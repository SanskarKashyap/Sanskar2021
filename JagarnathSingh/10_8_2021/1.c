//WAP to find the largest number and counts the occurrence of the largest number in a dynamic array of n integers using a single loop.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter size of array: ");
    int n;
    scanf("%d", &n);

    int *arr;
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
    }

    printf("Maximum element is %d and it appears %d times\n", max, count);
    free(arr);
    return 0;
}