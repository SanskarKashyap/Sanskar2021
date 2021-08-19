#include <stdio.h>

int main()
{
    int a, b, max, M1, lcm;

    scanf("%d%d", &a, &b);
    lcm = 0;

    if (a > b)
        max = M1 = a;
    else
        max = M1 = b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }

        max += M1;
    }

    printf("LCM is %d", lcm);
    return 0;
}