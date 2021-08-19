#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[] = "245";
    char s2[] = "45.67";
    int x = strtol(s1,NULL,10); 

    // strtol(String_name,NULL,base_no)

    float y = strtof(s2,NULL) ;
    cout << x + 10 << endl;
    cout << y-2 << endl;

    return 0;
}