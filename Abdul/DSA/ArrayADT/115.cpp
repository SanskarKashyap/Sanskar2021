// Union  intersection Difference
#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int length;
    int size;
};

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
    Array sarr = {{4, 5, 7, 9, 12, 45}, 6, 20};
    Array sarr1 = {{2, 5, 7, 38, 45, 98}, 7, 20};
    Array sarr3;

    sarr3 = Union(sarr, sarr1);
    display(sarr3);
    sarr3 = intersection(sarr, sarr1);
    display(sarr3);
    sarr3 = Difference(sarr, sarr1);
    display(sarr3);

    return 0;
}
