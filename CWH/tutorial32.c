#include <stdio.h>

int laura(int r[])
{
    int i,sum=0 ; 
    for (i = 0; i <6; i++)
    {
      
        sum = sum + r[i];
        printf("+ %d \n",r[i]);
        // printf("the sum of arri %d \n",sum);
     
    }
      printf("--------\n");
    printf("  %d\n",sum );
    return sum/i ;
}
int main()
{
    
    int arr[] = {1, 2, 3, 4, 5, 6};
   
    int av = laura(arr);
  
    printf("and the average is : %f",(float) av );
   
    return 0;
}