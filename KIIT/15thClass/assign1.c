#include <stdio.h>

int main() 
{ 
   char a[100]; 
   printf("Enter Ur sentence \n"); 
   scanf("%[^\n]",a); 
   printf("%s\n",a); 
}