#include <stdio.h>
int main()
{
    
    int mark[5];

    for (int i = 0; i < 5; i++)
    {
        printf("assign the marks of roll number %d :", i+1);
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nMarks of roll numer %d is %d", i+1, mark[i]);
    }

    return 0;
}