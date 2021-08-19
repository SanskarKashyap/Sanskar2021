#include <iostream>
#include <string>

using namespace std;

class student
{
protected:
    string stu;

    int roll;

public:
    void set_name(string);
    void get_name(void);
};

void student ::set_name(string n)
{
    string set_name = "sanskar";
}
void student ::get_name()
{
    cout << "Student name is " << set_name << endl;
}
class exam : public student
{
protected:
    float maths;
    float phy;

public:
    void set_marks(float, float);
    void get_marks(void);
};


int main()
{
      
    return 0;
}