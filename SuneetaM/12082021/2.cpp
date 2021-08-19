// wap to calculate the factorial of a given no.


#include <iostream>
using namespace std;
class factorial
{
private:
    int n;

public:
    factorial()
    {
    }
    factorial(int no)
    {
        n = no;
    }
    void display()
    {
        int fact = 1;
        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            cout << "factorial of " << n << " is " << fact;
        }
        else
        {
            cout << "factorial of is 1";
        }
    }
};

int main()
{
    factorial fac(5);
    fac.display();

    return 0;
}