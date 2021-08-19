#include <stdio.h>
int main()
{int a,b;
    float c=0 ;
printf("find summation of 1/i \n assign the value of I :");
scanf("%d",&a);
for (int i = 1; i <= a; i++)
{
    c +=(float) 1/i;

}
printf("sumation is %f",c);


    return 0;
}