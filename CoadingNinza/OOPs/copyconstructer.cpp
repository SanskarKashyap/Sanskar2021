#include <iostream>
using namespace std;
class student
{
public:
    int age;
    int id;
    string name;
    void display()
    {
        cout << age << " " << id << " " << name << endl;
    }
    student() //                /dEFAUL CONSTRUCTER/
    {
        return;
    }
    student(int ag, int idd, string nname) //              /PARAMILITRASID CCONSTRUCTOR /
    {
        age = ag;
        id = idd;
        name = nname;
    }
    ~student()
    {
        cout << "Distructer is called " << endl;
    }
};

int main()
{
    student s1 = {34, 825, "kim"};
    student s2(s1); //                           /COPING THE ELEMENT OA S1 IN S2
    student s3, s4, s5 = {4, 85, "lol"};
    student *s6 = new student;
    *s6 = {8, 345, "haha"};

    s1.display();
    s2.display();
    s5.display();
    (*s6).display();

    student *s7 = new student(*s6); //      / coping dinamicaly allocated to dynamic object
    (*s7).display();

    student s8(*s7);
    s8.display();

    student *s9 = new student(s1);
    s9->display();

    // COPY THE VALUE OF S1 TO S6
    s1 = *s6;
    (*s6).display();

    // AS DISTRUCTUR DOESNOT DELETE THE DINAMICALLY ALLOCATED OBJECT , SO WE HAVE TO DELETE IT MANUALLY
    delete s6;
    delete s7;
    delete s9;

    return 0;
}