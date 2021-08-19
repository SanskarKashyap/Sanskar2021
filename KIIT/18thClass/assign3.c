#include<stdio.h>
int main(){
    int size;printf("Enter number of words you would enter : ");
    scanf("%d",&size);size*=4;char a[size];
    char b[size];
    for(int i=0;i<size;i++) a[i]='0';
    for(int i=0;i<size/4;i++){
        printf("Enter %d word : ",i+1);
        scanf(" %[^\n]",(a+(i*4)));
    }
    int counter=0;
    for(int i=0;i<size;i++){
        if(*(a+i)!='\0' && *(a+i)!=' ' && *(a+i)!='0')
            b[counter++]=a[i];
    }
    b[counter]='\0';
    printf("%s",b);
    return 0;
}