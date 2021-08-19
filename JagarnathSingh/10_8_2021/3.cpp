// 3.WAP to store n student’s information (i.e. student’s roll no, name, gender, marks) of an educational institute and display all the data, using array of structure.

#include <iostream>
#include <algorithm>
using namespace std;
struct Student
{
    string name;
    int roll;
    float m[5];
    float sum = 0;
    char Gender;
};

void Sdetail(struct Student a[], int n)
{
    cout << "Name : " << a[n].name << endl;
    cout << "Roll : " << a[n].roll << endl;
    cout << "Gender : " << a[n].Gender << endl;
    cout << "Marks ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[n].m[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k, a, b, temp;
    cout << "Enter the No of Student" << endl;
    cin >> n;
    Student *arr;
    arr = new Student[n];
    // Student arr[n];
    for (int i = 0; i < n; i++)
    {

        cout << "Enter Your Name " << endl;
        cin >> arr[i].name;
        cout << "Enter Your roll " << endl;
        cin >> arr[i].roll;
        cout << "Enter Your Gender " << endl;
        cin >> arr[i].Gender;
        cout << "Enter Your Marks " << endl;

        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i].m[j];
            arr[i].sum = arr[i].sum + arr[i].m[j];
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        Sdetail(arr, i);
    }
    delete[] arr;
    return 0;
}

