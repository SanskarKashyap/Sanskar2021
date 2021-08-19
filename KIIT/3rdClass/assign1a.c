#include <stdio.h>
int main()
{

    printf("Diffrent Data Type\n");
    int a;
    printf("Integer : ");
    scanf("%d", &a);
    printf("%d\n", a);

    float b;
    printf("Float : ");
    scanf("%f", &b);
    printf("%f\n", b);

    int short c ;
    printf(" Short Integer : ");
    scanf("%hd", &c );
    printf("%hd\n",c );
    
    long d ;
    printf("Long Integer : ");
    scanf("%ld",&d );
    printf("%ld\n",d );

    long long e;
    printf("Long Llong Integer : ");
    scanf("%lld",&e );
    printf("%lld\n",e );

     double f ;
    printf("Double  : ");
    scanf("%lf",&f );
    printf("%lf\n",f );

     long double g ;
    printf("Long Double : ");
    scanf("%Ld",&g );
    printf("%Ld\n",g );


    return 0;
}