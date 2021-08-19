#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    START:
    printf("%d\n",n%10);
    n=n/10;
    
    if(n>=1){
        goto START;
    }
    return 0;
}