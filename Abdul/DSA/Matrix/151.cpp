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
    void get ()
    {
        return A[j * (j - 1) / 2 + i - 1] ; 
    }
    void print()
    {
        for ( int i = 0; i <=n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                A[]
            }
            
        }
        
    }
};
int main()
{
    int n, x;
    cout << "Enter size of matrix\n";
    cin >> n;
    class UpperTM upt(n);
}