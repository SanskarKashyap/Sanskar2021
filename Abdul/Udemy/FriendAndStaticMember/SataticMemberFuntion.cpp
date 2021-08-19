#include <iostream>
using namespace std;

class Test
{
private:
    int a;
    int b;

public:
    static int count; // shareable member of the class
    Test()
    {
        a = 10;
        b = 12;
        count++;
    }
    static int getCount()

    {
        // a++ ;            // static member funtion can only call static data types .. normal one is denied ;
        return count;
    }
};
int Test ::count = 0; // we must declare outside the class once using scope resolution

int main()
{
    cout << Test::getCount() << endl;
    Test t1, t2; // single count veriable for both Test variable

    cout << Test::getCount() << endl;

    cout << t2.count << endl;

    cout << Test::count;

    return 0;
}