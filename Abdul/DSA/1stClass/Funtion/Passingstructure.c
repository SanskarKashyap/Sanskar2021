#include <stdio.h>
struct ractangle
{
    int length;
    int breadth;
};
// int area(struct ractangle rec)
int area(struct ractangle *rec)
{
    rec->length++;
    printf(" l (fun) %d\n", rec->length);
    return rec->length * rec->breadth; 
}
// int area (struct ractangle &rec)
// {
//     rec.length++;
//     printf(" l (fun) %d\n", rec.length);
//     return rec.length * rec.breadth;
// }
int main()
{
    // printf("Passing Structure by call by Value\n ");
    printf("Passing Structure by call by Address \n ");
    struct ractangle r = {5, 10};
    printf("Area is %d", area(&r));
    printf("(actual) l = %d ", r.length); 
    



    // printf("\n\n\n Passing structurre - call by refrence \n");    {not work in c ,,, only  work in c++}
    // printf("Area is %d", area(r));


    return 0;
}