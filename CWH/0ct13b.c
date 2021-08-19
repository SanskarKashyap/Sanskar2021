#include<stdio.h>
int main(){
    int a,b,c,large;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    large=(a>b)?(a>c?c:a):(b>c?c:b);
    printf("2nd largest number is %d", large);
    return 0;

}