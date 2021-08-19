#include <stdio.h>
#include <string.h>
union student
{
    int roll;
    int marks;
    char fav_char;
    char name[15];
};
int uploadDetail(union student *s1, union student *s2)
{
    scanf("%d%d", &s1->roll, &s1->marks);
    scanf("%s", &s1->name);
    scanf("%s", &s1->fav_char);

    scanf("%d%d", &s2->roll, &s2->marks);
    scanf("%s", &s2->name);
    scanf("%s", &s2->fav_char);
}

int main()
{
    union student s1, s2;
    uploadDetail(&s1, &s2);
    printf("roll-%d marks-%d Name- %s fav char-%c\n", s1.roll, s1.marks, s1.name, s1.fav_char);
    printf("roll-%d marks-%d Name- %s fav char-%c\n", s2.roll, s2.marks, s2.name, s2.fav_char);

}