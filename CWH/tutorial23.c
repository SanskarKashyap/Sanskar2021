#include <stdio.h>
int main()
{
    
    int mark[4];

    for (int i = 0; i < 5; i++)
    {
        printf("assign the marks of roll number %d ", i+1);
        scanf("%d", &mark[i+1]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\nMarks of roll numer %d is %d \n", i+1, mark[i+1]);
    }

    return 0;
}
