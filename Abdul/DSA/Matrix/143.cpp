#include <iostream>
using namespace std;
struct Matrix
{
    int *A;
    int n;
};
void set(struct Matrix &m, int i, int j, int x)
{
    if (i == j)
    {
        m.A[i - 1] = x;
    }
}
int get(struct Matrix &m, int i, int j)
{
    if (i == j)
    {
        return m.A[i - 1];
    }
    else
        return 0;
}
void print(struct Matrix &m)
{
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            if (i == j)
            {
                cout << m.A[i] << "\t";
            }
            else
                cout << "0\t";
        }
        cout << endl;
    }
}

int main()
{

    Matrix m;
    m.n = 4;
    m.A = new int[m.n];
    set(m, 1, 1, 6);
    set(m, 2, 2, 16);
    set(m, 3, 3, 21);
    set(m, 4, 4, 43);
    cout << get(m, 4, 4) << endl;
    print(m);
    // ~Matrix;
    return 0;
}