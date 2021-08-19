#include <stdio.h>
void showArray(int arr[][3]){
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            printf("%d ", arr[i-1][j-1]);
        }
    printf("\n");
    }
}
int multiply(int row, int col, int arrA[][3], int arrB[][3]){
    int sum = 0;
    for(int i = 0; i<3; i++){
        sum+=arrA[row][i]*arrB[i][col];
    }
    return sum;
}
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int m[3][3];

    printf("\nArray A\n\n");
    showArray(a);

    printf("\nArray B\n\n");
    showArray(b);

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            m[i-1][j-1]=multiply(i-1,j-1,a,b);
        }
    }

    printf("\nMultiplication of array A and B is:\n\n");
    showArray(m);
}