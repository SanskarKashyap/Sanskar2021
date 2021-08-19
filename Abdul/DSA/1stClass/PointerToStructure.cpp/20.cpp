#include <iostream>
using namespace std;
struct rec
{
    int len;
    int wid;
};
void fun(struct rec &k)     // call by refrence 
{
    (k).len = 6;
    (k).wid = 7;
}
// void  fun(struct rec *k )             // call by address 
// {
//     (*k).len=6;
//     (*k).wid=7;

// }
int main()
{
    rec r = {16, 17};
    cout << "Length " << r.len << endl;
    cout << "Width " << r.wid << endl;
    fun(r);         // call by refrence 
    // fun(&r);     // call by address 
    cout << "Length " << r.len << endl;
    cout << "Width " << r.wid << endl;
    return 0;
}