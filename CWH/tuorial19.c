#include<stdio.h>


void printMyDetail(int principal, int rate, int time){
    
    int k = rate * principal * time;
    int l = k/100;
    int m = principal+ l;
    printf("%d", m);
    
}

int main(){

    int p, k, t;
    printf("Enter p\n");    
    scanf("%d", &p);
    printf("Enter k\n");
    scanf("%d", &k);    
    printf("Enter t\n");    
    scanf("%d", &t);
    printMyDetail(p, k, t);

    
    return 0;
}