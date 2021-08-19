#include <stdio.h>
struct ractangle
{
    int length;
    int breadth;
};
void inicilize(struct ractangle *rec, int a, int b)
{
    rec->length = a;
    rec->breadth = b;
}
int area(struct ractangle rec)
{
    printf("\n Area is %d \n", rec.breadth * rec.length);
}
void changelength(struct ractangle *rec4, int n)
{
    rec4->length = n;
    printf("\n(formal  parameter) %d\n", rec4->length);
}

int main()
{
    struct ractangle r;
    inicilize(&r, 10, 5);
    area(r);
    changelength(&r, 25);
    printf("\n(actual parameter) %d\n", r.length);
    return 0;
}