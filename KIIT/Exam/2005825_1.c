#include "stdio.h"
#include "stdlib.h"

int *fib(int arrSize)
{
    int *arr = (int *)malloc(sizeof(int) * arrSize);
    int i = 0, k = 1, a = 0, b = 1;
    while (i < arrSize)
    {
        for (int j = 0; j < k; j++)
        {
            if (i < arrSize)
            {
                arr[i] = b;
                // printf("%d, ", arr[i]);
                // if (b > max)
                //     max = b;
                b = a + b;
                a = b - a;
                i++;
            }
            else
                break;
        }
        k++;
        a = 0;
        b = 1;
    }
    return arr;
}

int main()
{
    int arrSize;
    printf("Enter array size :");
    scanf("%d", &arrSize);

    int *arr = fib(arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        printf("%d, ", arr[i]);
    }

    int max = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\n\nmaximum element is : %d", max);

    free(arr);

}
