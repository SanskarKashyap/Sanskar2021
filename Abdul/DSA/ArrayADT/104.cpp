//binerary search
#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
int BinerySearch(int low, int high, int key, Array &arr)
{
    int mid;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}
int RBinerySearch(int low, int high, int key, Array const &arr)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
            return RBinerySearch(low, mid - 1, 25, arr);
        else
            return RBinerySearch(mid + 1, high, 25, arr);
    }
    return -1;
}
 
int main()
{
    struct Array arr = {{4, 6, 9, 13, 17, 25, 67}, 10, 6};
    cout << BinerySearch(0, arr.length, 25, arr) << endl;
    cout << RBinerySearch(0, arr.length, 25, arr);

    return 0;
}