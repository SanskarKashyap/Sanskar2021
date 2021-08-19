#include <stdio.h>
int printrows(int row)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int revprintrows(int row)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= row - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("press 0 for trangular piramid and press 1 for RevTrangular piramid\n");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        printf("enter the no of rows\n");
        scanf("%d", &rows);
        printrows(rows);
        break;
    case 1:
        printf("enter the no of rows\n");
        scanf("%d", &rows);
        revprintrows(rows);
        break;

    default:
        printf("enter a valid input ");
        break;
    }

    return 0;
}