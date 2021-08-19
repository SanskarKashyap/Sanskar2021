#include <sstream>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string str;

    char s1[100];
    cin >> s1;

    char *token = strtok(s1, ",");

    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, ",");
    }

    return 0;
}