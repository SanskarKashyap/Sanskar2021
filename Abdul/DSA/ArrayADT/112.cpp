#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
void Arrange(Array &arr)
{
    int j = -1;
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < 0)
        {
            j++;
            swap(arr.A[i], arr.A[j]);
        }
    }
}
void display(Array &arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
int main()
{
    Array arr = {{4, -6, 8, -19, 22, -5, 67}, 7, 10};
    Arrange(arr);
    display(arr);
    return 0;
}