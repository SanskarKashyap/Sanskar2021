#include <stdio.h>
#include <math.h>

int length(int a)
{
    int len = 0;
    while (a > 0)
    {
        a /= 10;
        len++;
    }
    return len;
}

int oddMid(int a)
{
    int mid = (length(a) + 1) / 2;
    int reminder = a % (int)pow(10, mid);
    int midT = reminder / (int)pow(10, (mid - 1));
    return midT;
}

int evenMid(int a)
{

    int mid = (length(a)) / 2;
    int reminder = a / (int)pow(10, mid-1);
     return reminder;

}

int main()
{
    int a, len,c;
    printf("Enter a Number\n");
    scanf("%d", &a);

    c=len%2;
    // printf("value of len is %d" , len);
    if (c==0)
    {
       printf("%d", evenMid(a));
    }
    else
    {
        printf("%d", oddMid(a));
    }
    
    

    return 0;
}
// 123456