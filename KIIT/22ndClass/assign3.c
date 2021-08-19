#include <stdio.h>
#include <string.h>

struct ED
{
    char name[10];
    int id;
    float salary;
};
int AvgSalary(struct ED *E)
{
    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
        sum = E[j].salary;
    }
    int avg = sum / 3;
    return avg;
}

int arrMax(struct ED arr[], int l)
{
    int temp = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i].salary > temp)
        {
            temp = arr[i].salary;
        }
    }
    return temp;
}

int main()
{
    struct ED E[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Employee name ");
        scanf("%s", E[i].name);
        printf("Enter Emp No. , Salary ");
        scanf("%d%f", &E[i].id, &E[i].salary);
    }
    int avg = AvgSalary(E);
    printf(" Avg Salary : %d", avg);

    return 0;
}
