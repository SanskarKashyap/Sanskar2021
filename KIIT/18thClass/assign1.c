#include<stdio.h>

void main()
{
    int a[]={1,2,3213,2,12322,232,2332,221,2221,22};
    int *max = a;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        if(max<(a+i)) max = a+i;
    }
    printf("MAX Element is: %d",*max);

}