#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
    string empno;
    string name;
    string designation;

public:
    void get()
    {
        cout << "Enter Employee No: ";
        getline(cin, empno);
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee Designation: ";
        getline(cin, designation);
    }
};
class Qualification : public Employee
{
protected:
    int UG;
    int PG;
    int experience;

public:
    void get()
    {
        Employee::get();
        cout << "Enter Employee UG: ";
        cin >> UG;
        cout << "Enter Employee PG: ";
        cin >> PG;
        cout << "Enter Employee Experience: ";
        cin >> experience;
    }
};
class Salary : public Qualification
{
public:
    void get()
    {
        Qualification::get();
    }
    void displayDetailsEmployee()
    {
        cout << "Employee No: " << empno << "\n";
        cout << "Employee Name: " << name << "\n";
        cout << "Employee Designation: " << designation << "\n";
        cout << "Employee UG: " << UG << "\n";
        cout << "Employee PG: " << PG << "\n";
        cout << "Employee Experience: " << experience << "\n";
        int increments = UG + PG + experience;
        cout << "Employee increments: " << increments << "\n";
    }
};

int main()
{

    Salary salaryEmp;
    salaryEmp.get();
    salaryEmp.displayDetailsEmployee();
    system("pause");
    return 0;
}