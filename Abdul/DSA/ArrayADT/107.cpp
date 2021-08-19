//binerary search
#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
int get(int i, Array arr)
{
    return arr.A[i];
}
void set(int i, int x, Array &arr)
{
    arr.A[i] = x;
}
int Max(Array &arr)
{
    int max = arr.A[0];
    for (int i = 0; i <= arr.length; i++)
    {

        if (max < arr.A[i])
        {
            max = arr.A[i];
        }
    }
    return max;
}
int Min(Array arr)
{
    int min = arr.A[0];
    for (int i = 0; i <= arr.length; i++)
    {
        if (min > arr.A[i])
        {
            min = arr.A[i];
        }
    }
    return min;
}
int Sum(Array &arr)
{
    int sum = 0;
    for (int i = 0; i <= arr.length; i++)
    {
        sum = sum + arr.A[i];
        // cout << sum << " "; 
    }
    return sum;
}
int main()
{
    struct Array arr = {{4, 6, 9, 13, 17, 25, 67}, 10, 6};
    cout << get(3, arr) << " ";
    set(3, 15, arr);
    for (int i = 0; i <= 6; i++)
    {
        cout << arr.A[i] << "  ";
    }
    cout << Max(arr) << endl;
    cout << Min(arr) << endl;
    cout << Sum(arr) << endl;
    cout << Sum(arr)/arr.length << endl;

    return 0;
}