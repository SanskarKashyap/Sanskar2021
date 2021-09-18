#include <iomanip>
#include <iostream>
using namespace std;
class Employee
{
public:
    int eno;
    string name, des;
    void get1()
    {
        cout << "Enter the employee number:" << endl;
        cin >> eno;
        cout << "Enter the employee name:" << endl;
        cin >> name;
        cout << "Enter the designation:" << endl;
        cin >> des;
    }
    void display1()
    {
        cout << setw(3) << eno << setw(15) << name << setw(13) << des;
    }
};
class salary : public Employee
{
    float bp, hra, da, pf, np;

public:
    void get2()
    {
        cout << "Enter the basic pay:" << endl;
        cin >> bp;
        cout << "Enter the Humen Resource Allowance:" << endl;
        cin >> hra;
        cout << "Enter the Dearness Allowance :" << endl;
        cin >> da;
        cout << "Enter the Profitablity Fund :" << endl;
        cin >> pf;
    }

    void calculate()
    {
        np = bp + hra + da - pf;
    }

    void display2()
    {
        cout << setw(10) << bp << setw(11) << hra << setw(15) << da << setw(14) << pf << setw(15) << np << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of employee:";
    cin >> n;
    salary s1[n];
    for (int i = 0; i < n; i++)
    {
        s1[i].get1();
        s1[i].get2();
        s1[i].calculate();
    }
    cout << "e no." << setw(13) << "name" << setw(13) << "des" << setw(13) << "basic pay" << setw(13) << "H.R.Allow." << setw(13);
    cout << "Dear.Allow" << setw(13) << "Prof.Fund" << setw(13) << "np" << endl;
    for (int j = 0; j < n; j++)
    {
        s1[j].display1();
        s1[j].display2();
    }
}