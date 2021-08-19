#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the marks of 3 students \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("highest marks obtained by a student %d : ", a > b ? (a>c? a:c) : (b>c)? b:c );
}
