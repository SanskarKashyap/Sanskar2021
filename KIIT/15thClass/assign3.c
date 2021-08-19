#include<stdio.h>
#define size 100
int main(){
    char temp,string[size];printf("Enter a string : ");int i,j,strlen=1;
    scanf("%[^\n]",string); while(string[strlen]!='\0') strlen++;
    i=0;j=strlen-1;
    while(i<j){
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
        i++;j--;
    }
    printf("Reversed string : %s",string);
    return 0;
}