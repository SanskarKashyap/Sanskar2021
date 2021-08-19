// #include <iostream>
// #define PI 3.14  // it assign pi value to each part ,, in compile time only
// using namespace std;

// int main()
// {
//     int r;
//     cin >> r;
//     cout << PI * r * r;

//     return 0;
// }

#include <iostream>
using namespace std;
int a; // if we use universal variable we dont need to pass arguments
void g()
{
    a++;
}

void print()
{
    a++;
    cout << a;
    g();
}

int main()
{
    a = 6;
    print();

    cout << endl
         << a;
    return 0;
}
