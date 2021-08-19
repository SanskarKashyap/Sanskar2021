#include<stdio.h>
struct stu{
    int roll;
    char name[20];
    int age;
    struct {
        int day;
        int month;
        int year;
    } dob;
};
void enter(struct stu *p){
    printf("Enter the name of student: ");
    scanf("%s",p->name);
    printf("Enter the roll: ");
    scanf("%d",&(p->roll));
    printf("Enter the date of birth: ");
    scanf("%d%d%d",&(p->dob.day),&(p->dob.month),&(p->dob.year));
}
void agecalculate(struct stu *p){
    int present_date = 29;
    int present_month = 12;
    int present_year = 2020;
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (p->dob.day > present_date) {
      present_date = present_date + month[p->dob.month - 1];
      present_month = present_month - 1;
   }
   if (p->dob.month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   int final_date = present_date - p->dob.day;
   int final_month = present_month - p->dob.month;
   int final_year = present_year - p->dob.year;
   p->age = final_year;
   printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
}
void main()
{
    struct stu student;
    enter(&student);
    agecalculate(&student);
}