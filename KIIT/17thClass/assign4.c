#include<stdio.h>

void main()
{
    int a[5];
    int *b = a;
    for(int i=0;i<5;++i){
        printf("Enter the value %d: ",i+1);
        scanf("%d",b+i);
    }
    for(int i=0;i<5;++i){
        printf("\nThe %d value is: %d",i+1,*(b+i));
    }
    
}