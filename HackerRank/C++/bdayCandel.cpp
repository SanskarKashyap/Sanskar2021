#include <stdio.h>
void occurence(int *p, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (p[i] == p[j] && p[j] != -1)
            {
                ++count;
                if (count > 1)
                {
                    p[j] = -1;
                }
            }
        }
        if (count == 1)
            printf("\nThe element %d is present at %d times in array.", p[i], count);
    }
}
int main()
{
    int size;
    printf("Enter the size of array:- ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Elements:- ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    occurence(arr, size);
    return 0;
}