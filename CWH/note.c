#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Amount\n");
    scanf("%d", &a);

    int b = a / 2000, c = a % 2000;
    if (b != 0)
    {
        printf("%d notes 2000 \n ", b);
    }
    else { }

    int d = c / 500, e = c % 500;
    if (d != 0)
    {
        printf("%d notes 500 \n ", d);
    }
    else {  }

    int f = e / 200, g = e % 200;
    if (f != 0)
    {
        printf("%d notes 200 \n ", f);
    }
    else{}

    int h = g / 100, i = g % 100;
    if (h != 0)
    {
        printf("%d notes 100 \n ", h);
    }
    else { }

    int j = i / 50, k = i % 50;
    if (j != 0)
    {
        printf("%d notes 50 \n ", j);
    }
    else{}

    int l = k / 20, m = k % 20;
    if (l != 0)
    {
        printf("%d notes 20 \n ", l);
    }
    else{}

    int n = m / 10, o = m % 10;
    if (n != 0)
    {
        printf("%d coins 10 \n ", n);
    }
    else { }

    int p = o / 5, q = o % 5;
    if (p != 0)
    {
        printf("%d coins 5 \n ", p);
    }
    else { }

    int r = q / 2, s = q % 2;
    if (r != 0)
    {
        printf("%d coins 2 \n ", r);
    }
    else { }

    int t = s / 1;
    if (t != 0)
    {
        printf("%d coins 1 \n ", t);
    }
    else { }

    return 0;
}
