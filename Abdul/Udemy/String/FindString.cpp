#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s = "Hindu Rastra SApna Hai , Afganistan tk Apna Hai ";
    cout << s.find("Apna") << endl;
    cout << s.rfind("Apna") << endl;        // IN STR.FIND FUNTION WHOLE STRING/CHAR  IS SEARCHED AT ONE PLACE

    cout << s.find('i') << endl;
    cout << s.rfind('i') << endl;

    cout << s.find_first_of('f') << endl;
    cout << s.find_first_of("pf") << endl; // IN STR.FIND_FIRST_OF("PF")  funtion ANY CHAR WHICH COMES 1ST WILL BE ADDRESIFIED

    cout << s.find_first_of('i') << endl;

    cout << s.find_first_of('a') << endl;
    cout << s.find_first_of('a', 8) << endl;
    cout << s.find_last_of('a') << endl;
    cout << s.length() << endl;

    return 0;
}