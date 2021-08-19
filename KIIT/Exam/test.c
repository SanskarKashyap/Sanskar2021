#include "stdio.h"
#include "stdlib.h"

int* fib(int arrSize)
{
    int arr[arrSize], i = 0, k = 1, a = 0, b = 1;
    while (i < arrSize)
    {
        for (int j = 0; j < k; j++)
        {
            if (i < arrSize)
            {
                arr[i] = b;
                // printf("%d, ", arr[i]);
                // if (b > mx)
                    // mx = b;
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
    // printf("%d", arr[1]);
    return arr;
}

int main()
{
    int arrSize;
    printf("Enter array size :");
    scanf("%d", &arrSize);

    int *ptr = (int *)malloc(sizeof(int) * arrSize);

    int*k = fib(arrSize);
    printf("%d", k[1]);

    
}