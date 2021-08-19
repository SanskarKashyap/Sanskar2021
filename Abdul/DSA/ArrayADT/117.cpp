//binerary search
#include <iostream>
using namespace std;
struct Array
{
    int A[20];
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
void reverse(Array &arr)
{
    int *b;
    b = new int[arr.length];

    for (int i = 0; i < arr.length; i++)
    {
        b[i] = arr.A[arr.length - 1 - i];
    }
    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = b[i];
    }
}
void reverse2(Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(arr->A[i], arr->A[j]);
    }
}

void insert(int a, Array &arr)
{
    int i = arr.length - 1;

    while (a < arr.A[i])
    {
        arr.A[i + 1] = arr.A[i];
        i--;
    }
    arr.A[i + 1] = a;
    arr.length++;
}
int CSort(Array &arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            cout << "false  ";
            return 0;
        }
    }
    cout << "true ";
    return 1;
}
Array Union(Array &ar, Array &ar1)
{
    Array arr3;
    int i = 0, j = 0, k = 0;
    while (i < ar.length && j < ar1.length)
    {
        if (ar.A[i] < ar1.A[j])
        {
            arr3.A[k++] = ar.A[i++];
        }
        else if (ar1.A[j] < ar.A[i])
        {
            arr3.A[k++] = ar1.A[j++];
        }
        else
        {
            arr3.A[k++] = ar.A[i++];
            j++;
        }
    }
    for (; i < ar.length; i++)
    {
        arr3.A[k++] = ar.A[i++];
    }
    for (; j < ar1.length; j++)
    {
        arr3.A[k++] = ar1.A[j++];
    }

    arr3.length = k;
    arr3.size = 20;
    return arr3;
}
Array Difference(Array &ar, Array &ar1)
{
    Array arr3;
    int i = 0, j = 0, k = 0;
    while (i < ar.length && j < ar1.length)
    {
        if (ar.A[i] < ar1.A[j])
        {
            arr3.A[k++] = ar.A[i++];
        }
        else if (ar1.A[j] < ar.A[i])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    for (; i < ar.length; i++)
    {
        arr3.A[k++] = ar.A[i++];
    }

    arr3.length = k;
    arr3.size = 20;
    return arr3;
}
Array intersection(Array &ar, Array &ar1)
{
    Array arr3;
    int i = 0, j = 0, k = 0;
    while (i < ar.length && j < ar1.length)
    {
        if (ar.A[i] < ar1.A[j])
        {
            i++;
        }
        else if (ar1.A[j] < ar.A[i])
        {
            j++;
        }
        else
        {
            arr3.A[k++] = ar.A[i++];
            j++;
        }
    }

    arr3.length = k;
    arr3.size = 20;
    return arr3;
}
void Merge(Array &X, Array &Y, Array &Z)
{

    int i = 0, j = 0, k = 0;
    Z.length = (X.length + Y.length) - 1;
    while (i < X.length && j < Y.length)
    {
        if (X.A[i] < Y.A[j])
        {
            // cout << arr.A[i] << " ";
            Z.A[k++] = X.A[i++];
        }
        else if (X.A[i] > Y.A[j])
        {
            // cout << arr1.A[i] << " ";
            Z.A[k++] = Y.A[j++];
        }
    }
    for (; i < X.length;)
    {
        Z.A[k++] = X.A[i++];
    }
    for (; j < Y.length;)
    {
        Z.A[k++] = Y.A[j++];
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
    
    struct Array arr = {{4, 6, 9, 13, 17, 25, 67}, 10, 6};
    cout << BinerySearch(0, arr.length, 25, arr) << endl;
    cout << RBinerySearch(0, arr.length, 25, arr) << endl;
    cout << Max(arr) << endl;
    cout << Min(arr) << endl;
    cout << Sum(arr) << endl;
    cout << Sum(arr) / arr.length << endl;
    display(arr);
    reverse(arr);
    display(arr);
    reverse2(&arr);
    display(arr);
    insert(23, arr);
    display(arr);
    cout << CSort(arr) << endl;
    Array sarr = {{4, 5, 7, 9, 12, 45}, 20, 6};
    Array sarr1 = {{2, 5, 7, 38, 45, 98}, 20, 7};
    Array sarr3;
    Array sarr4;
    // sarr3 = Union(sarr, sarr1);
    // display(sarr3);
    // sarr3 = intersection(sarr, sarr1);
    // display(sarr3);
    // sarr3 = Difference(sarr, sarr1);
    // display(sarr3);
    Array Marr = {{4, 5, 7, 9, 12, 45}, 20, 6};
    Array Marr1 = {{2, 23, 35, 38, 89, 98}, 20, 7};
    Array Marr2;
    Merge(Marr, Marr1, Marr2);
    display(Marr2);
    Merge(sarr, sarr1, sarr4);
    display(sarr4);
    return 0;
} 