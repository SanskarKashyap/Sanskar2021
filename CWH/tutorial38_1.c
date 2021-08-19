#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll;
    int marks;
    char fav_char;
    char name[15];
}ss;
int uploadDetail(ss *s1, ss *s2)
{
    scanf("%d%d", &s1->roll, &s1->marks);
    scanf("%s",&s1->fav_char);
    scanf("%s",&s1->name);

    scanf("%d%d", &s2->roll, &s2->marks);
    scanf("%s",&s2->fav_char);
    scanf("%s",&s2->name);
    
}

int main()
{
    ss s1, s2;
    uploadDetail(&s1, &s2);
    printf("roll-%d marks-%d fav char-%c Name- %s\n", s1.roll, s1.marks , s1.fav_char,s1.name);
    printf("roll-%d marks-%d fav char-%c Name- %s\n", s2.roll, s2.marks , s2.fav_char,s2.name);

    
}