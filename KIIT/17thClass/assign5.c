#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5,12,121,31,3123,2};
    int i=0;
    int n = sizeof(a)/sizeof(int);
    printf("Enter the value from where you want to see the array: ");
    scanf("%d",&i);
    for( i--;i<n;++i){
        printf("\nThe %d value is: %d",i+1,*(a+i));
    }
    
}