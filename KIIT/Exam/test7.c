#include<stdio.h>
void f1(char arr[])
{
    *++arr = 'd';
    *++arr = 'e';
}
int main()
{
    char a[10];
    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'c';
    a[4] = 'd';
    f1(a);
    printf("%s", a);
    return 0;
}