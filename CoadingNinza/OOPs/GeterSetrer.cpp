//password inn oops
#include <iostream>
using namespace std;
class student
{
private:
    int age;

public:
    void setAge(int a, int pass)
    {
        if (pass != 132) //password inn oops
        {
            return;
        }

        age = a;
    }
    int id;
    int getAge()
    {
        return age;
    }

    string name;
};

int main()
{
    student s1;
    s1.setAge(20, 189);
    s1.id = 825;
    s1.name = "Sanskar";

    student s2;
    student s3, s4, s5;
    s5.setAge(18, 130);
    s5.id = 789;
    s5.name = "Palak";
    student *s6 = new student;
    // *s6 = {8, 345, "haha"};
    s6->setAge(24, 132);
    s6->id = 234;
    s6->name = "Sakshi";
    // s6->name="haha" ;
    cout << s1.getAge() << " " << s1.id << " " << s1.name << endl;
    cout << s5.getAge() << " " << s5.id << " " << s5.name << endl;
    cout << (*s6).getAge() << " " << (*s6).id << " " << (*s6).name << endl;
    return 0;
}