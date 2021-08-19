#include<stdio.h>

void main()
{   int n,first;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the first element: ");
    scanf("%d",&first);
    arr[0]=first;
    for(int i=0;i<n;++i){
        arr[i+1] = arr[i]+3;
    }
    for(int i=0;i<n;++i){
        printf("%d ",arr[i]);
    }
    arr[n-1]=first;
    for(int i=n-1;i>=0;--i){
        arr[i-1] = arr[i]+3;
    }
    printf("\n");
    for(int i=0;i<n;++i){
        printf("%d ",arr[i]);
    }
    if(n%2!=0) n--;
    arr[0]=first;
    arr[n/2]=first;
    for(int i=0;i<(n/2-1);++i){
        arr[i+1]=arr[i]+3;
        arr[n/2+i+1]=arr[n/2+i]+3;
    }
    printf("\n");
    for(int i=0;i<n;++i){
        printf("%d ",arr[i]);
    }   

}