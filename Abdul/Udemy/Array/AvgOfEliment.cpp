#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a No. ";
    cin >> n;
    int A[n];
    float sum = 0.0;
    for (auto &x : A)
        cin >> x;
    for (auto x : A)
    {
        sum = sum + x;
    }
    cout<<sum<<endl ; 
    cout <<"  Avg  "<< (sum/n);

    return 0;

}