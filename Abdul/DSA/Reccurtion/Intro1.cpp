#include <iostream>
using namespace std;
void recfun(int a)
{
    if (a > 0)
    {
        cout << a << endl;
       
        recfun(a-1);   // n-- execute in next line 
    }
}
int main()
{
    int n;
    cin >> n;
    recfun(n);

    return 0;
}