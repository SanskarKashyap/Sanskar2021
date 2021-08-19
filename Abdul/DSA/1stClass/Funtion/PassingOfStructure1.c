// array cant be passed by call by value darectly but can be passed under structure in call by value format

#include <stdio.h>
struct test
{
    int A[5], n;
};
int fun(struct test *ch)
{
    ch->A[0] = 8987;
}
int marks(struct test ch)
{
    printf("marks in diffrent sub  ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d ", ch.A[i]);
    }
}

int main()
{
    struct test t = {{5, 6, 7, 8, 9}, 34};
    fun(&t);
    printf("Roll No. - %d \n", t.n);
    marks(t);

    return 0;
}