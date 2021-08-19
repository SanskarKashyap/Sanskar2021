#include<stdio.h>

void HCFrec(int a, int b){
    int c;
    c=b%a;
    if(c==0){
        printf("%d", a);
    }else {
        HCFrec(c, a);
    }
}

int main()
{int a, b, rem ;
printf("Find GCD of 2 No.\n");
scanf("%d%d",&a,&b);
// HCFrec(a, b);

while(b%a!=0){
    int k = a;
    a = b%a;
    b = k;
}
printf("%d", a);

return 0;
}