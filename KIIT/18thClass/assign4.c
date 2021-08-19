#include<stdio.h>
#include<string.h>
int main(){
    int size;printf("Enter max string size : ");scanf("%d",&size);
    char string1[size],string2[size];
    printf("Enter string 1 : ");scanf(" %[^\n]",string1);
    printf("Enter string 2 : ");scanf(" %[^\n]",string2);
    strcat(string1,string2);
    printf("%s",string1);
    return 0;
}