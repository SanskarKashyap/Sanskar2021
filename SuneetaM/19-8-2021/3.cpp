
// 3. wap to create a class student with data member year of admission and year of pass out.
// then calculate the average marks of student
//    for n number of subject through function with argument initialize and display the
//     corosseponding values of the data members.

#include <iostream>
using namespace std;
class student
{
private:
    int yoa, yop;

public:
    void get(int mks[], int n);
    void avg(int mks[], int n);
};

void student::get(int mks[], int n)
{
    cout << "Enter year of admission: ";
    cin >> yoa;
    cout << "Enter year of passout: ";
    cin >> yop;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter marks of " << i << " Subject: " << endl;
        cin >> mks[i - 1];
    }
}

void student::avg(int mks[], int n)
{

    int avg = 0;
    for (int i = 1; i <= n; i++)
    {
        avg = avg + mks[i - 1];
    }
    cout << "Average marks of student in " << yoa << "--" << yop << " is : " << avg / n << endl;
}
int main()
{
    student s;
    cout << "Enter no of subjects: ";
    int n;
    cin >> n;
    int *mks;
    mks = new int[n];
    // int mks[n];
    s.get(mks, n);
    s.avg(mks, n);

    return 0;
}