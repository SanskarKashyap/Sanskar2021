#include <iostream>
using namespace std;
class Display
{
    int cnt;

public:
    Display() { cnt = 0; }
    static void show_data()
    {
        cout << ++cnt << endl;
    }
};
int main()
{
    Display d;
    Display::show_data();
    return 0;