#include <stdio.h>
int main()
{
    printf("unit converter ");

    char input;
    float KMtoMiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokg = 0.453592;
    float inchestometers = 0.453592;
    float a, b;
    start :
    
        printf("\npress q to quit\n press 1 to KM to Miles \n press 2 for inches to foot \n press 3 for CMs to Inches \n press 4 for Pound to KG \n press 5 for inches to meter \n ");
        scanf(" %c", &input);
        switch (input)

        {
        case 'q':
            printf("queting the program");
            goto end;
            break;

        case '1':
            printf("enter the distance in KM ");
            scanf("%f", &a);
            printf("%f miles\n", a * KMtoMiles);
            break;
        case '2':
            printf("enter the distance in Inches ");
            scanf("%f", &a);
            printf("%f foot\n", a * inchestofoot);
            break;
        case '3':
            printf("enter the distance in CMs ");
            scanf("%f", &a);
            printf("%f inches\n", a * cmstoinches);
            break;
        case '4':
            printf("enter the weight in pound ");
            scanf("%f", &a);
            printf("%f kg \n", a * poundtokg);
            break;
        case '5':
            printf("enter the distance in inches ");
            scanf("%f", &a);
            printf("%f meters\n", a * inchestometers);
            break;
        default:
            break;
        }
    goto start ;

end:
    return 0;
}
