#include <iostream>
using namespace std;
class Swap
{
    int x;
    int b;

public:
    void PSwap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
};
int main()
{
    Swap s;
    cout << "Enter 2 no. x and y ";

    int a;
    int b;
    cin >> a >> b;
    cout << "X = " << a << " "
         << "Y = " << b << endl;
    s.PSwap(a, b);
cout << "X = " << a << " "
         << "Y = " << b << endl;
    return 0;
}