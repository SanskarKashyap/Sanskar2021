#include <iostream>
using namespace std;

int main()
{
    char a = 'A';
    char b[10] = "hellow_1";
    char c[] = "Hellow_2";
    char d[] = {'H', 'e', 'l', 'l', 'o', 'w', '_', '3', '\0', '4'};
    char e[] = {65, 66, 67, '\0'};

    char *f = "hellow_5";
    string g = "hellow_6";

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;

    return 0;
}
