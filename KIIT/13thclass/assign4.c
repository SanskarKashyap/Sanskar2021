#include <stdio.h>

int main()
{
    int a[6] = {1, 3, 5, 7, 9, 4};
    int b;
    for (int i = 0; i < 6; i = i + 2)
    {
        b = a[i];
        a[i] = a[i + 1];
        a[i + 1] = b;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}