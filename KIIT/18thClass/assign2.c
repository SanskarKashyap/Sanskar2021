#include<stdio.h>

void main()
{
    char a[]={'A','B','C','D','\0'};
    char *b = a;
    for(int i=0;i<sizeof(a);++i){
        for(int j=i;j<sizeof(a);++j){
            printf("%c ",*(b+j));
        }
        printf("\n");
    }
    b = a + (sizeof(a)-1); 
    for(int i=0;i<sizeof(a);++i){
        for(int j=0;j<=i;++j){
            printf("%c ",*(b+j));
        }
        b--;
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<sizeof(a)-1;++i){
        for(int j=sizeof(a)-i-1;j>0;j--){
            printf("%c ",*(b+j));
        }
        printf("\n");
    }
}