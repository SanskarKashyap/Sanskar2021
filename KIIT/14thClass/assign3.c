#include <stdio.h>
int main()
{
    int row = 1, col = 1, counter = 1;
    printf("Enter number of rows and cols : ");
    scanf("%d%d", &row, &col);
    printf("Enter matrix elements : \n");
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = counter++;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}