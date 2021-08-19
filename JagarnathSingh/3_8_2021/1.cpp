#include <iostream>
using namespace std;

int prime(int a)
{
    int count = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
            count++;
    }
    return count;
}

int main()
{
    cout << "Enter a no " << endl;

    int a;
    cin >> a;
    if (prime(a) != 1)
        cout << a << " is not a prime no " << endl;
    else
        cout << a << " is a prime no " << endl;

    return 0;
}