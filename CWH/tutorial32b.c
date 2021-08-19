#include<stdio.h>
int func2(int *arr)
{
    for (int  i = 0; i < 7; i++)
    {
        arr[i] = arr[i] + 2;
        printf("%d\n",arr[i]);
    }
    arr[3]=3456;
   
    return 0;
}



int main()
{
    int arr[]={2,3,4,5,6,7,8};
    printf("%d\n ",arr[2]);
    func2(arr);
    printf("%d\n",arr[2]);
  func2(arr);
    return 0;
}