#include <iostream>
#include <stdio.h>
using namespace std;
struct Student
{
    char name[30];
    int roll;
    float m[5];
};

int main()
{
    Student s1;
    printf(" Enter Your Name ");
    scanf("%s", &s1.name);
    printf(" Enter Your Roll ");
    scanf("%d", &s1.roll);
    printf(" Enter Your Marks ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &s1.m[i]);
    }
    cout <<" Name : "<< s1.name<<endl ;
    cout <<" Roll : "<< s1.roll<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout <<" Marks"<<i<<" :"<< s1.m[i]<<" ";
    }

    return 0;
}