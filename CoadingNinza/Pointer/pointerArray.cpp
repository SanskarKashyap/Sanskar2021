// // // // #include <iostream>
// // // // using namespace std;

// // // // int main()
// // // // {

// // // //     // int a[] = {1, 2, 3, 4};
// // // //     // int *p = a;
// // // //     // // a++;
// // // //     // cout << *(p+1) << endl;
// // // //     //// char b[] = "{";
// // // //     // char *c = &b[0];
// // // //     // c++;
// // // //     // cout << c << endl;
// // // //     char s[] = "hello";
// // // //     char *p = s;
// // // //     cout << s[0] << " " << p;
// // // //     cout << sizeof(p);
// // // //     cout << sizeof(s);
// // // //     return 0;
// // // // }
// // // #include <iostream>
// // // using namespace std;
// // // void swap(char *x, char *y)
// // // {
// // //     char *t = x;
// // //     x = y;
// // //     y = t;
// // // }

// // // int main()
// // // {
// // //     char *x = "geeksquiz";
// // //     char *y = "geeksforgeeks";
// // //     char *t;
// // //     swap(x, y);
// // //     cout << x << " " << y;
// // //     t = x;
// // //     x = y;
// // //     y = t;
// // //     cout << " " << x << " " << y;
// // //     return 0;
// // // }
// // #include <iostream>
// // using namespace std;

// // void updateValue(int *p)
// // {
// //     *p = 610 % 255;
// // }

// // int main()
// // {
// //     char ch = 'A';
// //     updateValue((int *)&ch);
// //     cout << ch;
// // }
// #include <iostream>
// using namespace std;
// void swap(char *x, char *y)
// {
//     char *t = x;
//     x = y;
//     y = t;
//         cout << x << " " << y<<"1"<<endl ;

// }

// int main()
// {
//     char *x = "geeksquiz";
//     char *y = "geeksforgeeks";
//     char *t;
//     swap(x, y);
//     cout << x << " " << y;
//     t = x;
//     x = y;
//     y = t;
//     cout << " " << x << " " << y;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<<&arr[0]<<" ";
  cout<< ptr2 - ptr1;
  return 0;
}