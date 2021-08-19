#include<stdio.h>

void main()
{
    int a[5];
    for(int i=0;i<5;++i){
        printf("Enter the value %d: ",i+1);
        scanf("%d",a+i);
    }
    for(int i=0;i<5;++i){
        printf("\nThe %d value is: %d",i+1,*(a+i));
    }
    
}