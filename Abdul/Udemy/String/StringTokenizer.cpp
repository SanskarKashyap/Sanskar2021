#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[50] = "x=10;y=20;z=33;";
    char *token = strtok(s1, ";");

    while (token != NULL)
    {
        cout << token << endl;
        token= strtok(NULL,";");
    }

    return 0;
}