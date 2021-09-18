#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    int rollno;
    string name;

public:
    void setData(int rn, string n)
    {
        rollno = rn;
        name = n;
    }
};

class Fees : public Student
{
protected:
    int fees;

public:
    void submitFees(int f)
    {
        fees = f;
    }
    void generateReceipt()
    {
        cout << "Fee Receipt:";
        cout << "Roll No: " << rollno << "\n";
        cout << "Name: " << name << "\n";
        cout << "Fee: " << fees << "\n";
    }
};

class Result : public Fees
{
private:
    int tests;
    int activities;
    int sports;

public:
    void setMarks(int tests, int activities, int sports)
    {
        this->tests = tests;
        this->activities = activities;
        this->sports = sports;
    }
    void generateReceipt(void)
    {
        float tm = tests + activities + sports;
        float average = tm / 3.0;
        char grade;
        if (average >= 90)
        {
            grade = 'A';
        }
        else if (average >= 80 && average < 90)
        {
            grade = 'B';
        }
        else if (average >= 70 && average < 80)
        {
            grade = 'C';
        }
        else if (average >= 60 && average < 70)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
        Fees::generateReceipt();
        cout << "\n\nMarks Receipt:";
        cout << "Marks in Tests: " << tests << "\n";
        cout << "Marks in Activities: " << activities << "\n";
        cout << "Marks in Sports: " << sports << "\n";
        cout << "Grade: " << grade << "\n\n";
    }
};
int main(void)
{
    Result studentSmith;
    studentSmith.setData(89656645, "Peter Smith");
    studentSmith.submitFees(85);
    studentSmith.setMarks(75, 65, 85);
    studentSmith.generateReceipt();

    system("pause");
    return 0;
}
