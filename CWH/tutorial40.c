#include <stdio.h>
int rev(int S[])
{
    for (int i = 0; i < 4 / 2; i++)
    {
        int temp = S[i];
        S[i] = S[4 - i];
        S[4 - i] = temp;
    }
}

int main()
{
    printf("\nReversal of a array \n");

    int S[] = {5, 15, 3, 4, 25};
    printf("\nbefore swipe\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", S[i]);
    }
    printf("\nafter swipe\n");
    for (int i = 4; i >= 0; i--)
    {
        printf(" %d ", S[i]);
    }
    rev(S);
    printf("\nswipe using funtion \n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", S[i]);
    }

    return 0;
}