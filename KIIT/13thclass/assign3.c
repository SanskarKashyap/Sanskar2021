#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    int i;
    int inp;
    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &inp);
        a[i] = inp;
    }
    printf("Normal order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nOrder after changing according to question: ");
    int mid1, mid2, mid;
    if (n % 2 == 0)
    {
        mid1 = (n - 1) / 2;
        mid2 = mid1 + 1;
        for (i = 0; i < mid2; i++)
        {
            printf("%d %d ", a[mid1 - i], a[mid2 + i]);
        }
    }
    else
    {
        mid = n / 2;
        for (i = 0; i < mid + 1; i++)
        {
            if (i == 0)
            {
                printf("%d ", a[mid]);
            }
            else
            {
                printf("%d %d ", a[mid - i], a[mid + i]);
            }
        }
    }

    return 0;
}