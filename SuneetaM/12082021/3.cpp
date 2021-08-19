// wap to display only even numbers between 1 to 150.

#include <iostream>
using namespace std;
class even
{
private:
    int n;

public:
    even(int no)
    {
        n = no;
    }
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
    }
};
int main()
{
    even e(150);
    e.display();
    return 0;
}