#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str = "Hindu";
    str.append(" Rastra");
    cout << str << endl;

    str.insert(3, "aa");
    cout << str << endl;

    str.insert(3, "AKAKA", 3);
    cout << str << endl;

    str.replace(3, 5, " hello sanatani "); // str.replace(index,no of term to be replaced , "Reeplaced by ")

    cout << str << endl;

    str.push_back('S');                  // OR we can use   // str.erase();

    cout << str << " Push  BACK " << endl;

    str.pop_back();

    cout << str << " POP BACK " << endl;

    string s2 = "Afganistan";
    cout << str << " " << s2 << endl;

    str.swap(s2);
    cout << str << " " << s2 << endl;

    return 0;
}