#include <iostream>
using namespace std;

class student
{

private:
    int Roll;
    static int adminNo;
    string Name;

public:
    student(string s)
    {
        adminNo++;
        Roll = adminNo;
        Name = s;
    }
    // friend void display();
    void display() { cout << "Name " << Name << " Roll " << Roll << endl; }
};
int student ::adminNo = 0;
// void display(){cout << "Name " << Name << "Roll " << Roll << endl;}   // friend funtion can be use as we have to read  
 
int main()
{
    student s1("Sanskar");
    student s2("OM");
    student s3("Anshuman");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
