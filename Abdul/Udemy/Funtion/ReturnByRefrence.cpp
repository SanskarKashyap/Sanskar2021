#include <iostream>
using namespace std;
int &funtion(int & no)
{
    no = 25;
    cout << &no << endl;
    return no;
}

int main()
{
    int a = 20;
    funtion(a);
    cout << a << endl;
    cout << &a << endl;

    return 0;
}
