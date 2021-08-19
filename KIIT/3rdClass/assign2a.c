#include<stdio.h>
int main()
{ int a,b,c ;

printf("Enter a Number in Decimal Format : \n");
scanf("%d",&a );
printf("Decimal : %d\n", a);
printf("OctaDecimal : %o\n", a);
printf("Hecimal : %x\n", a);
printf("Enter a Number in OctaDecimal Format : ");
scanf("%o",&b );
printf("Decimal : %d\n", b);
printf("OctaDecimal : %o\n", b);
printf("Hecimal : %x\n", b);
printf("Enter a Number in HexaDecimal Format : ");
scanf("%x",&c );
printf("Decimal : %d\n", c);
printf("OctaDecimal : %o\n", c);
printf("Hecimal : %x\n", c);

return 0;
}