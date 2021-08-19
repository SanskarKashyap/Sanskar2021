#include<stdio.h>


int printMyDetail(int principal, int rate, int time){
    
    int k = rate * principal * time;
    int l = k/100;
    int m = principal+ l;
    printf("%d\n", m);
    return m;
    
}

int main(){

    int p, k, t;
    printf("Enter p\n");    
    scanf("%d", &p);
    printf("Enter k\n");
    scanf("%d", &k);    
    printf("Enter t\n");    
    scanf("%d", &t);
    int var = printMyDetail(p, k, t);
    printf("%d", var);

    
    return 0;
}