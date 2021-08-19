#include <stdio.h>
#include <string.h>

struct ED
{
    char name[10];
    int id;
    float salary;
};

int main()
{
    struct ED E[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter Employee name ");
        scanf("%s",E[i].name);
         printf("Enter Emp No. , Salary ");
        scanf("%d%f", &E[i].id, &E[i].salary);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Employee Name is %s\n ID is %d\n Salary is %f\n" ,E[i].name, E[i].id, E[i].salary);
    }
    return 0;
}
