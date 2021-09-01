#include <iostream>
using namespace std;
class Swap
{
    int x;
    int b;

public:
    void increment(int &a)
    {
        a++;
    }
};
int main()
{
    Swap s;
    cout << "Enter a number X for increment  ";

    int a;5
    
    cin >> a;
    cout << "X = " << a << endl;
    s.increment(a);

    cout << "After increment : ";
    cout << "X = " << a << " ";

    return 0;
}