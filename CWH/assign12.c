#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the resistance of resistor connected in series  ");
    scanf("%d%d", &a, &b);
    float x = (a+b);
    printf("%0.2f is the net resistace of the conductor ",x);

    return 0;
}
