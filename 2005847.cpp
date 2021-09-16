// WAP to create a class ‘student’ having name, roll no, age and section as its data members. Create another class ‘marks’ that stores three subject marks. Derive a class ‘result’ from student and marks class, that stores total and average marks. Display all the details of a student by calling the necessary member functions.

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

class Marks
{
protected:
    int m1, m2, m3;
};

class Result : public Student, public Marks
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
        show();
    }

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Section : " << section << endl;
        cout << "Roll no : " << roll << endl;
        cout << "Marks1 : " << m1 << " Marks2 : " << m2 << " Marks3 : " << m3 << endl;
        total_marks = m1 + m2 + m3;
        avg_marks = total_marks / 3;
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