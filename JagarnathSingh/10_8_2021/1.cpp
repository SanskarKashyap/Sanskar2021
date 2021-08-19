//1.WAP to find the largest number and counts the occurrence of the largest number in a dynamic array of n integers using a single loop.

#include <iostream>
#include <math.h>

using namespace std;

void max(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ptr[i] > ptr[j])
            {
            }
        }
    }
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
   

    return;
}
