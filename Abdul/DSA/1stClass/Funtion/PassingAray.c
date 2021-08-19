#include <stdio.h>
// void fun(int *A, int n)
void fun(int A[], int n)
{
    int i;
    A[0] = 45;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}

int main()
{
    printf("Passing array in Parameter  \n");
    int A[] = {4, 5, 6, 7, 3, 2};
    fun(A, 6);
    
    return 0;
}