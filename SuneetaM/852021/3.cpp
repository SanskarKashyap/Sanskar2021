#include <iostream>
#include <algorithm>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float m[5];
    float sum = 0;
};

void Sdetail(class Student a[], int n)
{
    cout << "Name : " << a[n].name << endl;
    cout << "Roll : " << a[n].roll << endl;
    cout << "Total Marks : "<<a[n].sum << endl;
    cout << "Persentage : "<<(a[n].sum/5) << endl;
    
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

   

    return 0;
}
