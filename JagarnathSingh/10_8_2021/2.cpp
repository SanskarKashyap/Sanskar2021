// 2.Given a dynamic array, WAP to print the next greater element (NGE) for every element. The next greater element 
//for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, 
//consider next greater element as -1. E.g. For the input array [2, 5, 3, 9, 7], the next greater elements for each elements are as follows.
//  Element	NGE
#include <iostream>
using namespace std;
int fun(int i,int n, int A[])
{
    for (int j = i; j < n; j++)
    {
        if (A[j] > A[i])
        {
            return A[j];
        }
       
    }
    return -1;
}

int main()
{
     int n;
    cin >> n;
    int *ptr;
    ptr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << " Element " << ptr[i] << " NGE " << fun(i,n, ptr) << endl;
    }

    return 0;
}

// 2	5
// 5	9
// 3	9
// 9	-1
// 7	-1
