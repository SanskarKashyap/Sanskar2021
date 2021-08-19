#include <iostream>
using namespace std;
void display()
{
    cout << "Hellow World ";
}
int main()
{
    void (*pf)();
    pf = display;
    (*pf)();
    return 0;
}