#include <iostream>
using namespace std;

int k = 69;
int main()
{
    int k = 10;
    {
        int k = 0;
        k++;
        cout << k << endl; // due to block lev scope ,, k value is 0 ;
    }
    cout << k << endl; // due to nearest scope ,, value of k is 10 ;

    cout << ::k + 1 << endl; // by the use of (::) scope resolutiaon ,, value of K taken from global ;

    return 0;
}
