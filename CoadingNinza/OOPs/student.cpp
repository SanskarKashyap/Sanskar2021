#include <iostream>
using namespace std;
class student
{
public:
    int age;
    int id;
    string name;
};

int main()
{
    student s1 = {34, 825, "kim"};
    student s2;
    student s3, s4, s5 = {4, 85, "lol"};
    student *s6 = new student;
    *s6 = {8, 345,"haha"};
    // s6->name="haha" ; 
    cout << s1.age << " " << s1.id << " " << s1.name << endl;
    cout << s5.age << " " << s5.id << " " << s5.name << endl;
    cout << (*s6).age << " " << (*s6).id << " " << (*s6).name << endl;
    return 0;
}