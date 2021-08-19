#include<stdio.h>

int main(){
    int n = 1;
    int counter=0;

    START:
    printf("%d\t",n);
    counter+=1;
    n+=counter;
    
    if(n<=100){
        goto START;
    }
    return 0;
}
