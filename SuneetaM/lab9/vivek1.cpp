#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
class Student
{
protected:
    string name, section;
    int roll, age;
};
class Marks : virtual public Student
{
protected:
    int m1, m2, m3;
};
class Sport : virtual public Student
{
protected:
    int grade;
};
class Result : virtual public Student, virtual public Marks, virtual public Sport
{
    int total_marks;
    float avg_marks;

public:
    void input()
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your section : ";
        cin >> section;
        cout << "Enter your roll : ";
        cin >> roll;
        cout << "Enter marks 1: ";
        cin >> m1;
        cout << "Enter marks 2: ";
        cin >> m2;
        cout << "Enter marks 3: ";
        cin >> m3;
        cout << "Enter Sport Grade : ";
        cin >> grade;

        show();
    }
    void show()
    {
        cout << "\n\nName : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Section : " << section << endl;
        cout << "Roll no : " << roll << endl;
        cout << "Marks1 : " << m1 << " Marks2 : " << m2 << " Marks3 : " << m3 << " Grade : " << grade << endl;
        total_marks = m1 + m2 + m3 + grade;
        avg_marks =(float) total_marks / 4;
        cout << "Total marks : " << total_marks << endl;
        cout << "\nAverage marks : " << avg_marks;
    }
};

int main()
{
    Result ob;
    ob.input();
    return 0;
}