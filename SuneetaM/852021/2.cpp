#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float tm;
};
void display(class Student s1)
{
    cout << "Name :" << s1.name << endl
         << "Roll : " << s1.roll << endl
         << "total Marks  : " << s1.tm << endl;
}

int main()
{
    class Student s;
    cout << "Enter detail name roll total marks " << endl;
    cin >> s.name >> s.roll >> s.tm;
    display(s);

    return 0;
}