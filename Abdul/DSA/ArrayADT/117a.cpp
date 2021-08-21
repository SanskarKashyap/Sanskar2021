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

        for (int i = arr.length; i > index; i--) //changes
            arr.A[i] = arr.A[i - 1];
        arr.A[index] = b;
        if (arr.length < arr.size)
        {
            arr.length++;
        }
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

    if (index >= 0 && index < ar.length) //changes
    {

        cout << " \n"
             << ar.A[index] << " is deleted " << endl;
        for (int i = index; i < ar.length - 1; i++) //changes
        {
            ar.A[i] = ar.A[i + 1];
        }
    }
    ar.length--;
}

int BinerySearch(int key, Array &arr)
{
    int mid, low = 0;
    int i = arr.length - 1;
    while (arr.A[i] == 0)
    {
        i--;
    }
    int high = i + 1;
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
    int mid;

    if (low <= high)
    {
        cout << low << " " << high << " " << mid;
        int mid = (low + high) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
            return RBinerySearch(low, mid - 1, key, arr); //changes
        else
            return RBinerySearch(mid + 1, high, key, arr); //changes
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
    for (int i = 0; i < arr.length; i++) //changes
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
    for (int i = 0; i < arr.length; i++) //changes
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
    for (int i = 0; i < arr.length; i++) //changes
    {
        sum = sum + arr.A[i];
    }
    return sum;
}

void Sinsert(int key, Array &arr)
{
    int i = arr.length - 1;
    while (arr.A[i] == 0) ////changes
    {
        i--;
    } 

    while (i >= 0 && key < arr.A[i]) //changes
    {
        arr.A[i + 1] = arr.A[i];
        i--;
    }
    arr.A[i + 1] = key;
    if (arr.length < arr.size)
    {
        arr.length++;
    }
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
    int n, ch, b, a;
    struct Array arr;
    cout << "Enter the size of Array : ";
    cin >> arr.size;
    cout << "Enter the length of Array : ";
    cin >> arr.length;

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
            cout << BinerySearch(a, arr) << endl; //changes
            break;
        case 4:
            cout << "Enter an element to RBinerySearch : ";
            // int a;
            cin >> a;
            cout << RBinerySearch(0, arr.length - 1, a, arr) << endl; //changes
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
        fflush(stdin);
    } while (ch < 10);

    return 0;
}