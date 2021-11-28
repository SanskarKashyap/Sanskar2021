#include <iostream>
using namespace std;
class employee
{
public:
    char e_name_regular[90];
    int e_id_regular;
    float e_salary_regular;
    char e_name_parttime[80];
    int e_id_parttime;
    void inputl()
    {
        cout << "Enter regular employee name:" << endl;

        cin >> e_name_regular;
        cout << "Enter regular employee id:" << endl;
        cin >> e_id_regular;
        cout << "Enter regular employee salary:" << endl;
        cin >> e_salary_regular;
    }
    void inputZ()
    {
        cout << "Enter part-time employee name:" << endl;
        cin >> e_name_parttime;
        cout << "Enter part-time employee id:" << endl;

        cin >> e_id_parttime;
    }
};
class regular : virtual public employee
{
public:
    float total_salary_regular;
    float hra, da;
    void calculate()
    {
        inputl();
        da = (80 * e_salary_regular) / 100;
        hra = (10 * e_salary_regular) / 100;
        total_salary_regular = hra + da + e_salary_regular;
        cout << "Regular employee total salary:" << total_salary_regular << endl;
    }
};
class part_time : virtual public employee

{
public:
    int hours;
    int pay_hour;
    float total_salary_parttime;

    void input3()
    {
        inputZ();
        cout << "Enter number of hours:" << endl;
        cin >> hours;
        cout << "Enter pay per hour:" << endl;
        cin >> pay_hour;
    }
    void calculateZ()
    {
        total_salary_parttime = hours * pay_hour;

        cout << "Part-time employee total salary:" << total_salary_parttime << endl;
    }
};
int main()
{
    regular obj;
    obj.calculate();
    cout << "**************************** ***********" << endl;
    part_time ob;
    ob.input3();
    ob.calculateZ();
    return 0;
}
