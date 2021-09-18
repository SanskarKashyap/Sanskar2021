#include <bits/stdc++.h>
using namespace std;
class Person
{
protected:
    char name[20];
    int age;

public:
    void getPersonData()
    {
        cout << "\n Enter the name: ";
        cin.getline(name, 20);
        fflush(stdin);
        cout << "\n Enter age: ";
        cin >> age;
    }
    void showData()
    {
        cout << "\n NAME : " << name;
        cout << "\n AGE : " << age;
    }
};
class Baseball_Player : public Person
{
protected:
    int Height;
    float strike;
    float average;
    int Weight;
    int slugging;

public:
    void getDetail()
    {
        getPersonData();
        cout << "\n Enter Height in cm: ";
        cin >> Height;
        cout << "\n Enter Strike Rate: ";
        cin >> strike;
        cout << "\n Enter the average: ";
        cin >> average;
        cout << "\n Enter Weight in kg: ";
        cin >> Weight;
        cout << "\n Enter slugging: ";
        cin >> slugging;
    }
    void showDetail()
    {
        showData();
        cout << "\n Height: " << Height;
        cout << "\n strike: " << strike;
        cout << "\n Average: " << average;
        cout << "\n Weight: " << Weight;
        cout << "\n Slugging: " << slugging;
    }
};
main()
{
    Baseball_Player B;
    B.getDetail();
    B.showDetail();
}
