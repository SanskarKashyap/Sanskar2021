#include <stdio.h>

int num(int c)
{
    if (c == 0)
    {
        printf(" ");
    }

    if (c == 1)
    {
        printf("one");
    }
    else if (c == 2)
    {
        printf("two");
    }
    else if (c == 3)
    {
        printf("three");
    }
    else if (c == 4)
    {
        printf("four");
    }
    else if (c == 5)
    {
        printf("five");
    }
    else if (c == 6)
    {
        printf("six");
    }
    else if (c == 7)
    {
        printf("seven");
    }
    else if (c == 8)
    {
        printf("eight");
    }
    else if (c == 9)
    {
        printf("nine");
    }

    return 0;
}

int main()
{
    int a, b, c;
    printf("Enter 2 Digit No.");
    scanf("%d", &a);
    b = a / 10;
    c = a % 10;
    switch (b)
    {
    case 0:
        num(c);
        break;

    case 1:
        if (a == 11)
        {
            printf("eleven");
        }
        else if (a == 12)
        {
            printf("twelve");
        }
        else if (a == 13)
        {
            printf("thirteen");
        }
        else if (a == 14)
        {
            printf("fourteen");
        }
        else if (a == 15)
        {
            printf("fifteen");
        }
        else if (a == 16)
        {
            printf("sixteen");
        }
        else if (a == 17)
        {
            printf("seventeen");
        }
        else if (a == 18)
        {
            printf("eighteen");
        }
        else if (a == 19)
        {
            printf("nineteen");
        }

        break;

    case 2:
        printf("twenty ");
        num(c);
        break;

    case 3:
        printf("thirty ");
        num(c);
        break;

    case 4:
        printf("forty ");
        num(c);
        break;

    case 5:
        printf("fifty ");
        num(c);
        break;

    case 6:
        printf("sixty ");
        num(c);
        break;

    case 7:
        printf("seventy ");
        num(c);
        break;

    case 8:
        printf("eighty ");
        num(c);
        break;

    case 9:
        printf("ninety ");
        num(c);
        break;

    default:
        break;
    }

    return 0;
}