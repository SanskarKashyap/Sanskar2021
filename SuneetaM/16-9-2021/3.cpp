#include <iostream>
using namespace std;
class student
{
public:
    int roll, age;
    string name;
    void getdata1()
    {
        cout << "Enter roll number of student" << endl;
        cin >> roll;
        cout << "Enter name of student" << endl;
        cin >> name;
        cout << "Enter age of student" << endl;
        cin >> age;
    }
    void display1()
    {
        cout << "         Roll number : " << roll << endl;
        cout << "                Name : " << name << endl;
        cout << "                 Age : " << age << endl;
    }
};
class test : public student
{
public:
    int m1, m2, m3, m4, m5, tot;

    void getdata2()
    {
        cout << "Enter marks of 1st sub " << endl;
        cin >> m1;
        cout << "Enter marks of 2nd sub " << endl;
        cin >> m2;
        cout << "Enter marks of 3rd sub " << endl;
        cin >> m3;
        cout << "Enter marks of 4th sub " << endl;
        cin >> m4;
        cout << "Enter marks of 5th sub " << endl;
        cin >> m5;
    }
    void display2()
    {
        cout << "Marks in 1st subject : " << m1 << endl;
        cout << "Marks in 2nd subject : " << m2 << endl;
        cout << "Marks in 3rd subject : " << m3 << endl;
        cout << "Marks in 4th subject : " << m4 << endl;
        cout << "Marks in 5th subject : " << m5 << endl;
        cout << "................................................" << endl;
    }
};
class result : public test
{
public:
    int tot;
    float per;
    void getdata3()
    {
        tot = m1 + m2 + m3 + m4 + m5;
        per = (float)(m1 + m2 + m3 + m4 + m5) / 5;
    }
    void display3()
    {
        cout << "\t Percentage : " << per << endl;
        cout << "\t Total marks : " << tot << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of students : ";
    cin >> n;
    result R1[n];
    for (int i = 0; i < n; i++)
    {
        int m = i + 1;
        cout << "Enter detail of student: " << m << endl;
        R1[i].getdata1();
        R1[i].getdata2();
        R1[i].getdata3();
    }
    for (int j = 0; j < n; j++)
    {
        int s = j + 1;
        cout << "Display detail of " << s << " student" << endl;
        cout << "....................................................." << endl;
        R1[j].display1();
        R1[j].display2();
        R1[j].display3();
    }
}