#include <iostream>
#include <string>
using namespace std;

class students
{
protected:
    string name;
    int total;

public:
    void input_students()
    {
        cout << "\nEnter your Name : ";
        cin >> name;
        cout << "\nEnter your total marks : ";
        cin >> total;
    }

    void output_students()
    {
        cout << "Name : " << name << endl;
        cout << "Total Marks : " << total << endl;
    }
};

class toppers : public students
{
protected:
    students recordTop[3];

public:
    friend void sort(toppers a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (a[j].total > a[i].total)
                {
                    toppers temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
    }

    void top3(toppers a[])
    {
        recordTop[0] = a[0];
        recordTop[1] = a[1];
        recordTop[2] = a[2];
    }

    void output_toppers()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "\nDetails of RANK " << i + 1 << " are : " << endl;
            recordTop[i].output_students();
        }
    }
};

int main()
{
    int n;
    cout << "Enter number of students : ";
    cin >> n;

    toppers st[n];

    for (int i = 0; i < n; i++)
    {
        st[i].input_students();
    }

    sort(st, n);

    st[0].top3(st);
    st[0].output_toppers();
    return 0;
}