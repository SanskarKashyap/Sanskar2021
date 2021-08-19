#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int c = a + b;
    cout << a << "+" << b << " = " << c << endl;
}
void sub(int a, int b)
{
    int c = a - b;
    cout << a << "-" << b << " = " << c << endl;
}
void mul(int a, int b)
{
    int c = a * b;
    cout << a << "X" << b << " = " << c << endl;
}
void did(int a, int b)
{
    int c = a / b;
    cout << a << "/" << b << " = " << c << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    sum(a, b);
    sub(a, b);
    mul(a, b);
    did(a, b);

    return 0;
}