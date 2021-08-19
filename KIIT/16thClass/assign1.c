#include<stdio.h>

int main(){
    int n = 10;
    
    START:
    printf("%d\t",n);
    n-=3;
    
    if(n>=0){
        goto START;
    }
    return 0;
}