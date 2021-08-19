// quadretic equation 

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("find the root of the quadretic equation\n ");
    printf("assign the value of a,b,c for ax^2 +bx +c\n");
    scanf("%d%d%d", &a, &b, &c);
    float d = (float)(b * b - (4 * a * c));
    printf("%f = d\n ", d);

    float t = sqrt(d);

    if (d == 0)
    {
        printf("this quadretic equation has equal roots \n");
        printf("quadretic roots are  %f ", (float)(-b)/2*a);
    }
    else if (d > 0)
    {
        printf("this quadretic equation has 2 diffrent real roots \n");
        printf("quadretic roots are %f %f ", (float)((-b)+t)/2*a, (float)((-b)-t)/2*a);
    }
    else
    {
        printf("this quadretic equation has imaginary  roots\n ");
        printf("quadretic roots are %f %f ", (float)((-b)+t)/2*a, (float)((-b)-t)/2 * a);
    }

    return 0;
}
