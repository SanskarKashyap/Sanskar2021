#include <iostream>
using namespace std;

class Test
{
private:
    int a;
    int b;

public:
    static int count;    // shareable member of the class
    Test()
    {
        a = 10;
        b = 12;
        count++;
    }
};
int Test ::count = 0;   // we must declare outside the class once using scope resolution 

int main()
{
    Test t1;
    Test t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    cout << Test::count;

    return 0;
}