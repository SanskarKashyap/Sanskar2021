#include <iostream>
#include <algorithm>

using namespace std;

void sum_max(unsigned long arr[], unsigned long sum)
{
    for (int i = 1; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
}
void sum_min(unsigned long arr[], unsigned long sum)
{
    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
    }
    cout <<" "<< sum;
}

int main()
{
    int a = 5;
    unsigned long  sum = 0;
    // cin >> a;
     unsigned long arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    // for (int i = 0; i < a; i++)
    // {
    //     cout << arr[i];
    // }
    sum_min(arr, sum);
    sum_max(arr, sum);

    return 0;
}