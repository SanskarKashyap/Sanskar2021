#include<stdio.h> 

int summation(int n){
    int add=0, m; 
    while(n>0){    
        m=n%10;    
        add=add+m;    
        n=n/10;    
    }    
    return add; 
}

int main(){ 
    int n, z;     
    printf("Enter a number:");    
    scanf("%d",&n);    
    z=summation(n);
    printf("Sum of digits is=%d",z);    
    return 0;  
}