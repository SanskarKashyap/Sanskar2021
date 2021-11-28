#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x > 0)
        {
            throw x;
        }
        else
        {
            throw "x";
        }
    }
    catch (int i)
    {
        cout << "Caught an integer : " << i << endl;
    }
    catch (char s)
    {
        cout << "Caught a string : " << s << endl;
    }
}

int main()
{
    cout << "Multiple catches: \n";
    test(2);
    test(0);
    test(-1);
    return 0;
}