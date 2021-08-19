// 5.WAP to declare one distance structure (with members kilometer and meter) and create the variables for addition of two
// distances using Pointers to structure.
// 10km500m--D1
// 21km600m--D2
// D3.meter=D1.meter+D2.meter  (100)
// D3.KM=D1.KM+D2.KM (32)
// If(D3.meter>=1000)
// D3.KM++;
// D3.meter=D3.meter-1000;
#include <stdio.h>
#include <stdlib.h>
struct Distance
{
    int KM;
    int meter;
};
void sum(struct Distance *pt, struct Distance *pt1)
{
    struct Distance *pt3;
    // pt3 = new struct Distance;
    pt3 = (struct Distance *)malloc(sizeof(struct Distance));

    pt3->KM = pt->KM + pt1->KM;
    pt3->meter = pt->meter + pt1->meter;
    if (pt3->meter >= 1000)
    {
        pt3->KM++;
        pt3->meter = pt3->meter - 1000;
    }
    printf("%d Km %d meter ", pt3->KM, pt3->meter);
}

int main()

{
    struct Distance *ptr, *ptr1;
    // ptr = new struct Distance;
    ptr = (struct Distance *)malloc(sizeof(struct Distance));
    // ptr1 = new struct Distance;
    ptr1 = (struct Distance *)malloc(sizeof(struct Distance));

    printf("Enter 1st distances  ");
    scanf("%d%d", &ptr->KM, &ptr->meter);
    printf("Enter 2nd distances  ");
    scanf("%d%d", &ptr1->KM, &ptr1->meter);
    sum(ptr, ptr1);

    return 0;
}