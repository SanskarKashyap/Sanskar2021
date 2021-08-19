#include <stdio.h>

void pattern(int a);

int main(int argc, char const *argv[])
{
   int x;
   printf("Enter number:");
   scanf("%d", &x);
   pattern(x);
   return 0;
}

void pattern(int a)
{
   for (int i = a; i >= 1; i--)
   {
      for (int j = 0; j < i; j++)
      {
         printf("*");
      }
      printf("\n");
   }
}