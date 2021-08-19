#include <stdio.h>

int main(void)
{

    int i, mx, mn, n;
    printf("Enter Array Size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    mx = arr[0];
    mn = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
        if (arr[i] < mn)
            mn = arr[i];
    }
    printf("Maximum : %d\n", mx);
    printf("Minimum : %d\n\n", mn);
}