#include <stdio.h>
void swap(int &p, int &q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
};
void main()
{
    int a, b;
    a = 12;
    b = 20;
    printf("Before swap a is %d and b is %d\n", a, b);
    swap(a, b);
    printf("After swap a is %d and b is %d\n", a, b);
}
