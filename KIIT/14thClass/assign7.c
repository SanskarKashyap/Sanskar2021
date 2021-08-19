#include <stdio.h>
int main()
{
    int size=1, counter = 1;
    printf("Enter order of matrix (odd number) : ");
    scanf("%d",&size);
    int a[size][size];
    if(size%2==0) printf("Wrong Input");
    for (int i = 0; (i < size)&&(size%2==1); i++)
    {
        for (int j = 0; j < size; j++)
            a[i][j] = counter++;
        printf("\n");
    }
    int print_buff=size,print_pad=0;
    printf("Enter option (0,1,2,3) : ");int choice=0;
    scanf("%d",&choice);
    if(choice==0){
        for(int i=0;i<=size/2;i++){
            for(int k=0;k<print_pad;k++) printf("\t");
            for(int j=print_pad;j<(print_pad+print_buff);j++) printf("%d\t",a[i][j]);
            print_pad++,print_buff-=2; printf("\n");
        }
    }
    else if(choice==1){
        for(int i=size-1;i>=size/2;i--){
            for(int k=0;k<print_pad;k++) printf("\t");
            for(int j=print_pad;j<(print_pad+print_buff);j++) printf("%d\t",a[j][i]);
            print_pad++,print_buff-=2; printf("\n");
        }
    }
    else if(choice==2){
        for(int i=size-1;i>=size/2;i--){
            for(int k=0;k<print_pad;k++) printf("\t");
            for(int j=print_pad;j<(print_pad+print_buff);j++) printf("%d\t",a[i][j]);
            print_pad++,print_buff-=2; printf("\n");
        }
    }
    else if(choice==3){
        for(int i=0;i<=size/2;i++){
            for(int k=0;k<print_pad;k++) printf("\t");
            for(int j=print_pad;j<(print_pad+print_buff);j++) printf("%d\t",a[j][i]);
            print_pad++,print_buff-=2; printf("\n");
        }
    }
    else printf("Wrong choice !!");
    return 0;
}