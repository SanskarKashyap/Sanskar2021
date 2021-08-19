#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    int i, len=0;
    
    printf("Enter a string:- \n");
    scanf("%[^\n]%*c",str);

    len = strlen(str);
    printf("\nOriginal String:- %s\n",str);
    printf("\nReversed String:-\n");
    for(i = len - 1; i >= 0; i--) 
    {
         printf("%c", str[i]);
    }
}