#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    printf("Enter any two Number: ");
    scanf("%d%d", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    printf("\nSum of %d and %d is %d", *ptr1, *ptr2, sum);
    getch();
    return 0;
}