#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s = "welcome";
    string ::reverse_iterator it;
    for (it = s.rbegin(); it != s.rend(); it++)
    {
        // cout<<*it ;
        *it = *it - 32;
        cout << *it;
    }

    return 0;
}