#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string a = "hellow";
    cout << a.length() << endl;
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    a.resize(50);
    // now the capacity will turn to 50 or it may be more then 50
    cout << a.capacity() << endl;
    cout << a.max_size() << endl;
    cout << a << endl;
    a.clear();
    // now the string will be crear
    cout << a << endl;
    cout << a.length() << endl;

    if (a.empty())
        cout << "String is Empty";
    else
        cout << "String is " << a << endl;

    return 0;
}
