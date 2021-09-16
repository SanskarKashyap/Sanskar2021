#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int age;

protected:
public:
    void SetRoll(int ro) { roll = ro; }
    void SetName(string na) { name = na; }
    void SetAge(int ag) { age = ag; }
    int getRoll() { return roll; }
    string getName() { return name; }
    int getAge() { return age; }
};
class Test : public Student
{
public:
    int A[5];
};
int main()
{
    int roll, age;
    string name;
    class Test t;
    cout << "\nEnter Roll : ";
    cin >> roll;
    cout << "\nEnter Name : ";
    cin >> name;
    cout << "\nEnter Age : ";
    cin >> age;
    t.SetRoll(roll);
    t.SetName(name);
    t.SetAge(age);
    cout << "\nEnter Marks of 5 sub : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> t.A[i];
    }

    cout << "\n: Detail you have entered :\n";
    cout << "Roll : " << t.getRoll() << "\tName : " << t.getName() << "\tAge : " << t.getAge()
         << "\nMarks :\n";
    for (int i = 0; i < 5; i++)
    {
        cout << t.A[i] << endl;
    }

    return 0;
}