#include <iostream>
using namespace std;

class Student
{
private:
    string name;

public:
    void setname(string s)
    {
        name = s;
    }
    int age;
    bool gender;

    void GetInfo()
    {
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
        cout << "Gender " << gender << endl;
    }
};
int main()
{
    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name ";
        string k;
        cin >> k;
        arr[i].setname(k);
        cout << "Age ";
        cin >> arr[i].age;
        cout << "Gender ";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].GetInfo();
    }

    return 0;
}