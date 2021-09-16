#include <iostream>
using namespace std;

class Student
{
private:
    int Roll;
    string name;
    int A[3];

public:
    Student(){};
    Student(int ro, string na, int *ma);
    void setRoll(int ro);
    void setName(string na);
    void setMarks(int *M);
    int TMarks(int *ma);
    char Grade(int *ma, Student s);
    // int Grade(int *ma, Student s);
};

Student ::Student(int ro, string na, int *ma)
{
    Roll = ro;
    name = na;
    for (int i = 0; i < 3; i++)
    {
        A[i] = ma[i];
    }
}

void Student ::setRoll(int ro)
{
    Roll = ro;
}

void Student ::setName(string na)
{
    name = na;
}

void Student ::setMarks(int *M)
{
    for (int i = 0; i < 3; i++)
    {
        A[i] = M[i];
    }
}

int Student ::TMarks(int *ma)
{
    int tsum = 0;
    for (int i = 0; i < 3; i++)
    {
        tsum = tsum + ma[i];
    }
    return tsum;
}

char Student ::Grade(int *ma, Student s)
// int Student ::Grade(int *ma, Student s)
{
    int x = s.TMarks(ma) / 3;
    return (x > 90) ? 'A' : (x > 80) ? 'B'
                        : (x > 70)   ? 'C'
                                     : 'D';
}

int main()
{
    class Student s;
    s.setRoll(825);
    s.setName("Sanskar");
    int A[3] = {40, 69, 70};
    s.setMarks(A);

    int B[3] = {78, 85, 90};
    class Student s1 = {824, "Sakshi", B};

    cout << "Sanskar : " << s.TMarks(A) << endl;
    cout << "Sakshi : " << s1.TMarks(B) << " " << s1.Grade(B, s1);

    return 0;
}