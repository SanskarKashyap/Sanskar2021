#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Hindu rastra sapna hai , afganistan tk aapna hai ";
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    string::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' || *it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U')
            count++;
        else if (*it == ' ')
            count1++;
        else
            count2++;
    }
    cout << "No. of vowels " << count << endl;
    cout << "No. of words " << count1 << endl;
    cout << "No. of consonent  " << count2 << endl;
    cout << s.length() << endl;
    cout << count + count1 + count2 << endl;
    return 0;
}