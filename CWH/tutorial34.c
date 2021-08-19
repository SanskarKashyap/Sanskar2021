#include <stdio.h>
int main()
{
        char str[78] ;
    // char str[]= "Sanskar";
    // char str[] = {'S', 'a', 'n', 's', 'k', 'a', 'r','\0'};
    printf("Enter a Name : ");
    gets(str);
    printf("Hey, %s\n", str);
    puts(str);
    return 0;
}  