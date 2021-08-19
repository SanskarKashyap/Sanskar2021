#include <stdio.h>
#include <string.h>

struct student
{
    char name[69];
    int id;
    float marks;
} s1, s2, s3;

int main()
{
    printf("Enter your Name : ");
    gets(s1.name);
    printf("Enter ID : ");
    scanf("%d", &s1.id);
    printf("Enter Marks : ");
    scanf("%f", &s1.marks);

    printf("%s , Roll No %d scored %f ", s1.name , s1.id, s1.marks);
    return 0;
} 