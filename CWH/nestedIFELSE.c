#include <stdio.h>
void al(int d, int sum)
    {
        float x = sum - 0.01*d*sum  ;
        printf("paybable amout is %f ", x);
    }
int main()
{
    int a, b, c;
    printf("enter the amount of product A ,B, C ");
    scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;

    

    int e = 4000 - sum, f = 5000 - sum;
    printf("%d\n", sum);
    if (sum > 5000)
    {
        if (a > 3000 || b > 3000 || c > 3000)
        {
            printf("you are eligible for 50%% discount 1  ");
            int d = 50;
            al(d, sum);
        }

        else
        {
            printf("you are eligiible for 40%% discount 2");
            int d = 40;
            al(d, sum);
        }
    }

    else if (sum > 4000)
    {
        if (a > 2000 || b > 2000 || c > 2000)
        {

            printf("you are elligible for 40 %% discount 3");
            int d = 40;
            al(d, sum);
        }
        else
        {
            printf("you are eligible for 35 %% discont 4 ");
            int d = 35;
            al(d, sum);
        }
    }
    else
    {
        printf("purchase for %d to avail the special offeron the shopping of 4000 \n or  %d to get special offer on the purchase  5000", e, f);
    }

    return 0;
}