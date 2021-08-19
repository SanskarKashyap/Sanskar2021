#include <stdio.h>
int main()
{
    int row = 1, col = 1, counter = 1,flag=0;
    printf("Enter number of rows and cols : ");
    scanf("%d%d", &row, &col);
    int a[row][col];
    for (int i=0;i<row; i++){
        for (int j=((flag==0)?0:(col-1));((flag==0)?(j<col):(j>=0));j+=((flag==0)?1:-1)){
            a[i][j]=counter++;
        }
        if(flag==0) flag=1; else flag=0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
