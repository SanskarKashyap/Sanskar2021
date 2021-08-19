#include <iostream>
using namespace std;
// int a = 9 ;
void fun()
{
    static int a = 9; // static can be used to make veriable same as global veriabl ,, means value of a will
                      // not be distroyed ,, but will stored , and can  be used evertime same as glble one
                      // but for that funtion only ;

    int b = 9;
    a++;
    cout << b << " " << a << endl;
}

int main()
{
    fun();
    fun();
    fun();
}
