// 4.WAP to store n employee’s data such as employee name, gender, designation, basic pay. Calculate the gross pay of each employees as follows:
// Gross pay = basic pay + HRA + DA
// HRA=25% of basic and DA=75% of basic.

#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[50];
    char Gender[15];
    char designation[50];

    float Basic_Salary;
    float Gross_Salary;
};

int main()
{
    int n;
    float DA, HRA;

    // cout << "No. of employee -> ";
    printf("No. of employee -> ");
    // cin >> n;
    scanf("%d", &n);
    struct employee *ptr;
    // ptr = new employee[n];
    ptr = (struct employee *)malloc(n * sizeof(struct employee));
    printf("\nEmployee's Details : ");
    for (int i = 0; i < n; i++)
    {

        // cout << "Enter Name -> " << endl;
        printf("Enter Name -> ");
        // cin >> ptr[i].name;
        scanf("%s", &ptr[i].name);

        printf("Enter Gender :  ");
        scanf("%s", &ptr[i].Gender);
        printf("Enter designation :  ");
        scanf("%s", &ptr[i].designation);

        printf("Enter Basic Salary :  ");
        scanf("%f", &ptr[i].Basic_Salary);

        DA = (ptr[i].Basic_Salary * 75) / 100;
        HRA = (ptr[i].Basic_Salary * 25) / 100;
        ptr[i].Gross_Salary = ptr[i].Basic_Salary + DA + HRA;
    }
    printf("\nDisplay the employee's information:\n");
    printf("Gender\t Name \t Design. \t Salary \n");

    for (int i = 0; i < n; i++)
    {
        printf("\n %s\t %s\t %s\t %.2f ", ptr[i].name, ptr[i].Gender, ptr[i].designation, ptr[i].Gross_Salary);
    }
    return 0;
}
