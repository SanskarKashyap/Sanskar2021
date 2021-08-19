#include<stdio.h>
int main()
{
    int a,b,c;
printf("Enter 3 Number");
scanf("%d%d%d",&a,&b,&c);
printf("Number are arrengenged in decending order \n:");

if (a>b)
{
    if (b>c)
    {
        printf("%d%d%d", a,b,c);
    }
  else
  {
       printf("%d%d%d",a,c,b);
  }
  
   
}
else
{
    if (a>c)
    {
        printf("%d%d%d",b,a,c);
    }
    else if (b>c)
    {
        printf("%d%d%d",b,c,a);
    }
    else
    {
          printf("%d%d%d",c,b,a);
    }
    
    
}


return 0;
} 