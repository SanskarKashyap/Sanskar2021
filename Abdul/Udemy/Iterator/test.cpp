#include <iostream>
using namespace std;

int fizzBuzz(int a)
{

    if (a % 3 == 0)
    {
        if (a % 5 == 0)
        {
            cout << "FizzBuzz"<<endl;
        }
        else
        {
            cout << "Fizz"<<endl;
        }
    }
    else if (a % 5 == 0)
    {
        cout << "Buzz"<<endl;
    }
    else
    {
        cout << a << endl;
    }
    return 0;
}
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        fizzBuzz(i);
     
    }
    return 0;
} 
