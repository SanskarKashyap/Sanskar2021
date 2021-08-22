//Lower tringular Matrix 
#include <iostream>
using namespace std;
class LowerTM
{
private:
    int n;
    int *A;

public:
    LowerTM(int n);
    void set(int i, int j, int x);
    int get(int i, int j);
    void print();
    ~LowerTM();
};

LowerTM::LowerTM(int n)
{
    this->n = n;
    A = new int[(n * (n + 1)) / 2];
}
void LowerTM::set(int i, int j, int x)
{
    // cout << "hello" << endl;
    if (i >= j)
    {
        // cout << i << j << "\t";

        A[((i * (i - 1)) / 2) + (j - 1)] = x;
    }
}
int LowerTM::get(int i, int j)
{
    if (i >= j)
    {
        return A[((i * (i - 1)) / 2) + (j - 1)];
    }
    else
        return 0;
}
void LowerTM::print()
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                // cout << A[((i * (i - 1)) / 2) + (j - 1)] << "\t";
                cout << get(i, j) << "\t";
            }
            else
                cout << "0\t";
        }
        cout << "\n";
    }
}

LowerTM::~LowerTM()
{
    delete[] A;
}

int main()
{
    int x, n;
    cout << "Enter Dimention\n";
    cin >> n;
    cout << "Enter All Element\n";
    class LowerTM ltm(n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cin >> x;
                ltm.set(i, j, x);
            }
        }
    }
    ltm.print();
    ltm.~LowerTM();
    return 0;
}