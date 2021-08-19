#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char A[15];
    cin >> A;
    char B[10];
    cin >> B;
    // cout << strcat(A, B) << endl;
    strncat(A,B,3);
    cout<<A ;

    return 0;
}