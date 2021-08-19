#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the value of x,y,z \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("   %d\n",x);
    printf("  %d %d\n",y,y*y);
    printf("%d  %d  %d\n",z,z*z,z*z*z*z);
    printf("  %d %d\n",y,y*y);
    printf("   %d\n",x);
    return 0;
}