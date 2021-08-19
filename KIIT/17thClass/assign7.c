#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5,12,121,31,3123,2};
    int n = sizeof(a)/sizeof(int);
    int *p,*q;
    p = a;
    q = a + n/2;
    for( int i=0;i<n/2;++i){
        printf("%d %d\t",*p+i,*q+i);
    }
    
}