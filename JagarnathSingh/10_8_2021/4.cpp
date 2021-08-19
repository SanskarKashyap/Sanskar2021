// 4.WAP to store n employee’s data such as employee name, gender, designation, basic pay. Calculate the gross pay of each employees as follows:
// Gross pay = basic pay + HRA + DA
// HRA=25% of basic and DA=75% of basic.
#include <iostream>
using namespace std;
struct employee
{
    char name[50];
    char Gender[15];
    char designation[50];

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

        cout << "Enter Name -> " << endl;
        cin >> ptr[i].name;
        cout << "Enter Gender : " << endl;
        cin >> ptr[i].Gender;
        cout << "Enter designation -> " << endl;
        cin >> ptr[i].designation;

        cout << "Enter Basic Salary : " << endl;
        cin >> ptr[i].Basic_Salary;

        DA = (ptr[i].Basic_Salary * 75) / 100;
        HRA = (ptr[i].Basic_Salary * 25) / 100;
        ptr[i].Gross_Salary = ptr[i].Basic_Salary + DA + HRA;
    }
    cout << "\nDisplay the employee's information:\n";
    cout << "Gender"
         << "\t"
         << "Name"
         << "\t"
         << "designation"
         << "\t"
         << "Salary";
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << ptr[i].name << "\t" << ptr[i].Gender << "\t" << ptr[i].designation << "\t" << ptr[i].Gross_Salary;
    }
    return 0;
}

