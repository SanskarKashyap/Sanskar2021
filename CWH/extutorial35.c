#include<stdio.h>
int main()
{
    printf("Enter your and your friend name : \n ");
    char str1 [60]; 
    char str2 [60]; 
    char str3 [160]; 
    gets(str1);
    gets(str2);
    // printf("%s is friend of %s ", str1 , str2 );
    strcpy(str3,strcat(str1 , str2 ));
    puts(str3);
    return 0;
} 