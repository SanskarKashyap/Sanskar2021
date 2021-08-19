#include<stdio.h>
int main()
{
printf("Print Rev of a array \n");
int arr[]={1,22,333,44,555,66,777,88,999};
for (int i = 8; i >= 0 ; i--)
{
   printf("%d\n",  arr[i] );
}

return 0; 
}