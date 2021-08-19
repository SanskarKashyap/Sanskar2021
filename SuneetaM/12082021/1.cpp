// Using class and object:

// wap to display numbers from 10 to 1 using for loop.


#include <iostream>
using namespace std;
class number
{
private:
    int n;

public:
    number()
    {
    }
    void display()
    {

        for (int i = 0; i < 10; i++)
        {
            cout << 10 - i<<" ";
        }
    }
};
int main()
{
    number t;
    t.display();

    return 0;
}