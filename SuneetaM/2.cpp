#include <iostream>
#include <algorithm>
using namespace std;
struct Student
{
    string name;
    int roll;
    float m[5];
    float sum = 0;
};
void TMarks(struct Student a[], int n)
{
    float tSum = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<i<<" "<<a[i].sum << endl ;
        tSum = tSum + a[i].sum;
    }

    cout << "Sum " << tSum << " Persentage " << tSum / (5 * n);
}
void Sdetail(struct Student a[], int n)
{
    cout << "Name : " << a[n].name << endl;
    cout << "Roll : " << a[n].roll << endl;
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
        cout << "Enter Your Marks " << endl;
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i].m[j];
            arr[i].sum = arr[i].sum + arr[i].m[j];
        }
    }
    cout << endl;
    TMarks(arr, n); // fun 1
    cout << endl;

    cout << "Get detail with roll " << endl;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (k == arr[i].roll)
        {
            Sdetail(arr, i); // fun 2
        }
        else
        {
            cout << "";
        }
    }
    cout << endl
         << "Enter the Range " << endl;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (a < arr[i].sum / 5 && b > arr[i].sum / 5)
        {
            Sdetail(arr, i); // fun 3
        }
        // else
        //     cout << " No One  "<< endl;
    }
    cout << " Ascending order of Marks  " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                if (arr[i].m[j] > arr[i].m[k])
                {
                    int temp = arr[i].m[j];
                    arr[i].m[j] = arr[i].m[k];
                    arr[i].m[k] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        Sdetail(arr, i);
    }
    delete[] arr;
    return 0;
}
