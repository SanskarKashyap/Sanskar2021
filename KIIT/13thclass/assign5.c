#include <stdio.h>
#define size 6
int main()
{
    int start = 0, flag = 0, a[size];
    printf("Enter %d numbers : ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
    start = (size % 2 == 0) ? ((size / 2) - 1) : ((size - 1) / 2);
    while (start >= 0)
    {
        if (flag == 0 && size % 2 == 0)
        {
            flag = 1;
            printf("%d %d", a[start], a[start + 1]);
        }
        else if (flag == 0 && size % 2 == 1)
        {
            flag = 1;
            printf("%d", a[start]);
        }
        else
        {
            printf(" %d %d", a[start], a[size - 1 - start]);
        }
        start--;
    }
    return 0;
}
