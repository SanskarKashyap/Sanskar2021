#include <iostream>
#include <cstring>

using namespace std;
int main()
// // method 1   Array one
// {
//     char A[] = "HinduRastra";
//     char B[] = "Ras";
//     if (strstr(A, B) != NULL)
//         cout << strstr(A, B);
//     else
//         cout << " Invalid Input ";
//     return 0;
// }

// // method 2 ,, OP
{
    string str = "HinduRastra";
    cout << str.substr(5) << endl;
    // substring from 5th index
    cout << str.substr(5, 3) << endl;
    // substring from (5th index, and no of latter in string )

    return 0;
}
