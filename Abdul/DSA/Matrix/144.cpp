#include <iostream>
using namespace std;

class DigonalM
{
private:
    int n;
    int *A;

public:
    DigonalM(int n)
    {
        this->n = n;
        A = new int[n];
    }
    void Set(int i, int j, int x);
    int get(int i, int j);
    void print();
    ~DigonalM()
    {
        delete[] A;
    }
};

void DigonalM ::Set(int i, int j, int x)
{
    if (i == j)
        A[i - 1] = x;
}

int DigonalM::get(int i, int j)
{
    if (i == j)
    {
        return A[i - 1];
    }
    return 0;
}

void DigonalM::print()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i] << "\t";
            }
            else
                cout << "0\t";
        }
        cout << "\n";
    }
}

int main()
{
    class DigonalM dm(5);

    dm.Set(1, 1, 4);
    dm.Set(2, 2, 6);
    dm.Set(3, 3, 19);
    dm.Set(4, 4, 21);
    dm.Set(5, 5, 13);

    dm.print();
    dm.~DigonalM();

    return 0;
}