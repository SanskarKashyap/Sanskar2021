#include <iostream>
using namespace std;
class Matrix
{
private:
    int n;
    int *A;

public:
    Matrix(int n);
    void RsetMatrix(int i, int j, int a);
    int RgetMatrix(int i, int j);
    void CsetMatrix(int i, int j, int a);
    int CgetMatrix(int i, int j);
    void PrintMatrix();
    ~Matrix();
};

Matrix::Matrix(int n)
{
    this->n = n;
    A = new int[n + (n + 1) / 2];
}
void Matrix::RsetMatrix(int i, int j, int a)
{
    if (i >= j)
    {
        A[i * (i - 1) / 2 + (j - 1)] = a;
    }
}
int Matrix::RgetMatrix(int i, int j)
{
    return A[i * (i - 1) / 2 + (j - 1)];
}
void Matrix::CsetMatrix(int i, int j, int a)
{
    if (i >= j)
    {
        A[((n * (j - 1)) - ((j - 2) * (j - 1) / 2)) + (i - j)] = a;
    }
}
int Matrix::CgetMatrix(int i, int j)
{
    return A[((n * (j - 1)) - ((j - 2) * (j - 1) / 2)) + (i - j)];
}
void Matrix::PrintMatrix()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                // cout << A[i * (i - 1) / 2 + (j - 1)] << "\t";
                // cout << RgetMatrix(i, j) << "\t";
                // cout << A[((n * (j - 1)) - ((j - 2) * (j - 1) / 2)) + (i - j)] << "\t";
                cout << CgetMatrix(i, j) << "\t";
            }
            else
                cout << "0\t";
        }
        cout << endl;
    }
}
Matrix::~Matrix()
{
    delete []A; 
}

int main()
{
    int x, y, n, a;
    cout << "Enter the size of Square Matrix : ";
    cin >> n;
    class Matrix mat(n);

    cout << "\n\nMenu :\n"
         << "1. Create Digonal Matrix\n"
         << "2. Create Lower Tringular Matrix\n"
         << "3. Create Upper Tringular Matrix\n"
         << "4. Create Symmetric Matrix\n"
         << "5. Print Matrix\n"
         << "6. Exit\n";
    cin >> x;
    if (x == 2 || x == 3)
    {
        cout << "Select Method :\n"
             << "1. Row Major\n"
             << "2. Column Major\n";
        cin >> y;
    }

    if (x == 2 && y == 1)
    {
        cout << "\nEnter Element\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                if (i >= j)
                {
                    cin >> a;
                    mat.RsetMatrix(i, j, a);
                }
            }
        }
    }
    if (x == 2 && y == 2)
    {
        cout << "\nEnter Element\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                if (i >= j)
                {
                    cin >> a;
                    mat.CsetMatrix(i, j, a);
                }
            }
        }
    }
    mat.PrintMatrix();

    return 0;
}