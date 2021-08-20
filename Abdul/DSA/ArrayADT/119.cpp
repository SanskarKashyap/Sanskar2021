//  void Display();
//     void Append(int x);
//     void Insert(int index, int x);
//     int Delete(int index);
//     int LinearSearch(int key);
//     int BinarySearch(int key);
//     int Get(int index);
//     void Set(int index, int x);

//     int Max();
//     int Min();
//     int Sum();
//     float Avg();
//     void Reverse();
//     void Reverse2();
//     void InsertSort(int x);
//     int isSorted();
//     void Rearrange();
//     Array *Merge(Array arr2);
//     Array *Union(Array arr2);
//     Array *Diff(Array arr2);
//     Array *Inter(Array arr2);
#include <iostream>
using namespace std;
class Array
{
private:
    int *A;
    int length;
    int size;

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }

    void insert(int a, int index)
    {
        if (index >= 0 && index <= length)
        {

            for (int i = length; i >= index; i--)
            {
                A[i] = A[i - 1];
            }
            A[index] = a;
            length++;
        }
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    void append(int n)
    {
        A[length] = n;
        length++;
    }

    void Delete(int n)
    {
        for (int i = n; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }

    void LinearSearch(int key)
    {
        for (int i = 0; i < length; i++)
        {
            if (A[i] == key)
            {
                cout << i << endl;
            }
        }
    }

    int BinarySearch(int key)
    {
        int mid;
        int low = 0;
        int high = length - 1;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (key == A[mid])
            {
                // cout << mid;
                // break;
                return mid;
            }
            else if (key < A[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        // cout << -1;
        return -1;
    }

    int Get(int index)
    {
        return A[index];
    }

    void Set(int index, int x)
    {
        A[index] = x;
    }

    int Max()
    {
        int max = A[0];
        for (int i = 0; i < length; i++)
        {
            if (max < A[i])
            {
                max = A[i];
            }
        }
        return max;
    }

    int Min()
    {
        int min = A[0];
        for (int i = 0; i < length; i++)
        {
            if (min > A[i])
            {
                min = A[i];
            }
        }
        return min;
    }

    int Sum()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum = sum + A[i];
        }
        return sum;
    }

    float Avg()
    {
        return Sum() / length;
    }

    void Reverse()
    {
        for (int i = 0, j = length - 1; i < j; i++, j--)
        {
            swap(A[i], A[j]);
        }
    }

    void InsertSort(int x)
    {
        int i = length - 1;
        while (i >= 0 && A[i] > x)
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = x;
        length++;
    }

    int isSorted()
    {
        // int j = length - 1;
        for (int i = 0; i < length - 1; i++)
        {
            if (A[i] < A[i + 1])
            {
                return 1;
            }
        }
        return 0;
    }
};
int main()
{
    Array *arr1;
    int ch, sz;
    int x, index;
    cout << "Enter Size of Array : ";
    scanf("%d", &sz);
    arr1 = new Array(sz);
    arr1->insert(2, 0);
    arr1->insert(5, 1);
    arr1->insert(13, 2);
    arr1->insert(25, 3);
    arr1->insert(65, 4);
    arr1->append(69);

    arr1->Delete(1);

    arr1->insert(4, 1);
    arr1->display();
    arr1->LinearSearch(25);
    cout << arr1->BinarySearch(25) << endl;
    cout << arr1->Get(5) << endl;
    arr1->Set(4, 62);
    arr1->display();
    cout << arr1->Max() << endl;
    cout << arr1->Min() << endl;
    cout << arr1->Sum() << endl;
    cout << arr1->Avg() << endl;
    arr1->Reverse();
    arr1->display();
    arr1->InsertSort(27);
    arr1->display();
    cout << arr1->isSorted();

    return 0;
}