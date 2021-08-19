#include<stdio.h>
int main()
{
printf("2nd use of typedef \n");
// int* a , b;
// int c;
// a=&c;
// b=c;
typedef int* integerPointer ;
integerPointer a , b; 
int c;
a=&c;
b=&c;

return 0;
}