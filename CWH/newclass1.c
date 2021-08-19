#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter marks in maths\n");
    scanf("%d", &a);

    printf("Enter marks in science\n");
    scanf("%d", &b);

    if (a > 33)
    {
        if (b > 33)
        {
            printf("You have passed in both the subjects and will get gifts worth rs 45\n");
        }
        else
        {
            printf("You have passed in maths only and will get gift worth rs 15\n");
        }
    }
    else if (a < 33)
    {
        if (b > 33)
        {
            printf("You have passed in science only and will get gift worth rs 15\n");
        }

        else
    {
        printf("you will not get any gifts\n");
    }
    }
    
}