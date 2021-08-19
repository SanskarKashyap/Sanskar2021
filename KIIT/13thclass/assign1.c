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
    printf("Forward order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nBackward order: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}