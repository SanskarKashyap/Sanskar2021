#include <iostream>
using namespace std;
class UpperTM
{
private:
    int n;
    int *A;

public:
    UpperTM(int n)
    {
        this->n = n;
        A = new int(n * (n + 1) / 2);
    }
    void set(int i, int j, int x)
    {
        A[j * (j - 1) / 2 + i - 1] = x;
    }
    int get(int i, int j)
    {
        return A[j * (j - 1) / 2 + i - 1];
    }
    void print()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= i)
                {
                    cout <<get(i, j)<< "\t";
                }
                else
                    cout << "0\t";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n, x;
    cout << "Enter size of matrix : ";
    cin >> n;
    class UpperTM upt(n);
        cout << "\nEnter elements of matrix : ";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                cin >> x;
                upt.set(i, j, x);
            }
        }
    }
    upt.print();
    return 0;
}