//binerary search
#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void insert(struct Array &arr, int index, int b)
{
    if (index >= 0 && index <= arr.length)
    {

        for (int i = arr.length; i >= index; i--)
            arr.A[i] = arr.A[i - 1];
        arr.A[index] = b;
        arr.length++;
    }
    cout << index << " / " << arr.A[index];
}
void append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}
void Delete(int index, Array &ar)
{
    cout << " \n"
         << ar.A[index] << " is deleted " << endl;
    if (index > 0 && index < ar.length)
    {
        for (int i = index; i < ar.length; i++)
        {
            ar.A[i] = ar.A[i + 1];
        }
    }
    ar.length--;
}
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
void Sinsert(int a, Array &arr)
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
    struct Array arr;
    cout << "Enter the size of Array : ";
    int n, ch, b, a;
    cin >> arr.size;
    arr.length = arr.size;
    cout << arr.length << endl;

    arr.A = new int[arr.size];
    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = 0;
    }
    do
    {
        cout << "\nMenu\n"
             << "1. Insert a Element  \n"
             << "2. Delete\n"
             << "3. BinerySearch\n"
             << "4. RBinerySearch\n"
             << "5. Sum\n"
             << "6. Max\n"
             << "7. Min\n"
             << "8. Insert a Element in Shorted Array\n"
             << "9. Display\n"
             << "10. Exit\n\n"

             << " Enter Your Choise \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter an index and Element : ";
            // int a, b;
            cin >> a >> b;
            insert(arr, a, b);
            break;

        case 2:
            cout << "Enter an index : ";
            // int a;
            cin >> a;
            Delete(a, arr);
            break;
        case 3:
            cout << "Enter an element to BinerySearch : ";
            int a;
            cin >> a;
            BinerySearch(0, arr.length, a, arr);
            break;
        case 4:
            cout << "Enter an element to RBinerySearch : ";
            // int a;
            cin >> a;
            RBinerySearch(0, arr.length, a, arr);
            break;
        case 5:
            cout << "Sum of all the Element in the array : ";
            cout << Sum(arr) << endl;
            break;
        case 6:
            cout << "Max Element in the array : ";
            cout << Max(arr) << endl;
            break;
        case 7:
            cout << "Min Element in the array : ";
            cout << Min(arr) << endl;
            break;
        case 8:
            cout << "Insert a Element in Shorted Array : ";
            // int a;
            cin >> a;
            Sinsert(a, arr);
            break;
        case 9:
            cout << "All the Element in Array : ";
            display(arr);
            break;

        default:
            break;
        }
        // fflush(stdin);
    } while (ch < 10);

    // struct Array arr = {{4, 6, 9, 13, 17, 25, 67}, 10, 6};
    // cout << BinerySearch(0, arr.length, 25, arr) << endl;
    // cout << RBinerySearch(0, arr.length, 25, arr) << endl;
    // cout << Max(arr) << endl;
    // cout << Min(arr) << endl;
    // cout << Sum(arr) << endl;
    // cout << Sum(arr) / arr.length << endl;
    // display(arr);
    // reverse(arr);
    // display(arr);
    // reverse2(&arr);
    // display(arr);
    // Sinsert(23, arr);
    // display(arr);

    return 0;
}