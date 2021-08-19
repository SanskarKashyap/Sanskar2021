// 3.WAP to store n student’s information (i.e. student’s roll no, name, gender, marks) of an educational institute and display all the data, using array of structure.

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int roll;
    float m[5];
    float sum;
    char Gender;
};

void Sdetail(struct Student a[], int n)
{
    printf("Name : %s \n", a[n].name);
    printf("ROll : %d \n", a[n].roll);
    printf("Gender : %c \n", a[n].Gender);

    printf("Marks \n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %.2f ", a[n].m[i]);
    }
    printf("\n");
    printf(" Your tOTAL Marks %.2f :", a[n].sum);
}

int main()
{
    int n, k, a, b, temp;
    printf("Enter the No of Student\n");
    scanf("%d", &n);
    struct Student *arr;
    arr = (struct Student *)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++)
    {
        printf("Enter Your Name \n");
        scanf("%s", &arr[i].name);
        printf("Enter Your roll\n");
        scanf("%d", &arr[i].roll);
        printf("Enter Your Gender \n");
        scanf("%s", &arr[i].Gender);
        printf("Enter Your Marks \n");
        for (int i = 0; i < 5; i++)
        {
            arr[i].sum = 0;
        }

        for (int j = 0; j < 5; j++)
        {
            scanf("%f", &arr[i].m[j]);
            arr[i].sum = arr[i].sum + arr[i].m[j];
        }
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        Sdetail(arr, i);
    }
    return 0;
}
