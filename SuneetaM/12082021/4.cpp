// wap to calculate the sum of numbers between 1 to N numbers.The user should enter
// the value of N.

#include <iostream>
using namespace std;

class sum
{
private:
    int n;

public:
    sum(int no)
    {
        n = no;
    }
    void display()
    {
        int tsum = 0;
        for (int i = 0; i <= n; i++)
        {
            tsum = tsum + i;
        }
        cout << tsum << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    sum k(n);
    k.display();

    return 0;
}