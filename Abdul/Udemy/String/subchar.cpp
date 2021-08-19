#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[] = "HinduuRastra";
    cout << strchr(a, 'u') << endl;
    cout << strchr(a, 's') << endl;
    cout << strrchr(a, 'u') << endl;

    return 0;
}  