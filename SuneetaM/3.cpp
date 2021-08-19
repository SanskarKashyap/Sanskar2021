#include <iostream>
using namespace std;
struct employee
{
    char name[50];
    int id;
    int age;
    float Basic_Salary;
    float Gross_Salary;
};

int main()
{
    int n;
    float DA, HRA;

    cout << "No. of employee -> ";
    cin >> n;
    employee *ptr;
    ptr = new employee[n];
    cout << "\nEmployee's Details : ";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter id Number: "<<endl;
        cin >> ptr[i].id;
        cout << "Enter Name -> "<<endl;
        cin >> ptr[i].name;
        cout << "Enter age -> "<<endl;
        cin >> ptr[i].age;

        cout << "Enter Basic Salary : "<<endl;
        cin >> ptr[i].Basic_Salary;

        DA = (ptr[i].Basic_Salary * 80) / 100;
        HRA = (ptr[i].Basic_Salary * 10) / 100;
        ptr[i].Gross_Salary = ptr[i].Basic_Salary + DA + HRA;
    }
    cout << "\nDisplay the employee's information:\n";
    cout << "ID"
         << "\t"
         << "Name"
         << "\t"
         << "Age"
         << "\t"
         << "Salary";
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << ptr[i].id << "\t" << ptr[i].name << "\t" << ptr[i].age << "\t" << ptr[i].Gross_Salary;
    }
    return 0;
}