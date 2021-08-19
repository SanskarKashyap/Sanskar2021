#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string time;

    getline(cin, time); //FOR EX - 07:05:45PM
    char cr[11];
    time.copy(cr, time.length());
    // cout << time.substr(8, 2);
    char hour[3];
    time.copy(hour, 2);
    int x = strtol(hour, NULL, 10);
    if (time.substr(8, 2) == "PM")
    {

        // cout << hour << endl;
        if (x < 12)
        {
            cout << x + 12;
            cout << time.substr(2, 6) << endl;
        }
        else
            cout << time.substr(0, 8);
    }
    else
    {
        if (x == 12)
        {
            cout << "00";
            cout << time.substr(2, 6) << endl;
        }
        else
        cout << time.substr(0, 8);
    }

    return 0;
}