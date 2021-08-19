#include <stdio.h>
int main()
{

    int a;
    int k[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("Enter the Amount\n");
    scanf("%d", &a);

    for (int i = 0; i < 10; i++)
    {
        int n = a / k[i];
        a = a % k[i];
        if (n != 0)
        {
            printf("%d X %d \n ", n, k[i]);
        }
        else
        {
        }
    }

    return 0;
}