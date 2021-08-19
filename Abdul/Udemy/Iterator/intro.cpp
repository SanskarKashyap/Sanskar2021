#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s = "welcome";
    string ::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout<<*it ;
        // *it = *it - 32;
        // cout << *it;
    }

    return 0;
}