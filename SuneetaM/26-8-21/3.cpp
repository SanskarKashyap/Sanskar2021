// WAP which ddisplay a given char , n no of times
#include <iostream>
using namespace std;

void print()
{
    for (int i = 0; i < 80; i++)
    {
        cout << '*';
    }
    cout << endl;
}

void print(char c)
{
    for (int i = 0; i < 80; i++)
    {
        cout << c;
    }
    cout << endl;
}

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << '*';
    }
    cout << endl;
}

void print(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
    cout << endl;
}

int main()
{
    print();
    print('^');
    print(10);
    print('&', 10);
    return 0;
}