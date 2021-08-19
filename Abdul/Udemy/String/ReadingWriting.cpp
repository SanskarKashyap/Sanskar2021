#include <iostream>
using namespace std;

int main()
{
    char S[100];
    cout << "Enter Your Name " << endl;
    // cin >> S;
    cin.get(S, 18);
    cout << "Welcome " << S << endl;

    cin.ignore();

    cout << "Enter Your Nick Name " << endl;
    cin.get(S, 5);
    cout << endl
         << "fuck U " << S;

    return 0;
}