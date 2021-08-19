#include <iostream>
using namespace std;
template <class t>
class arathmatic
{
private:
    t a;
    t b;

public:
    arathmatic(t a, t b);
    t sum();
    t diff();
};
template <class t>
arathmatic<t>::arathmatic(t a, t b)
{
    this->a = a;
    this->b = b;
}
template <class t>
t arathmatic<t>::sum()
{
    t c = a + b;
}
template <class t>
t arathmatic<t>::diff()
{
    int d = a - b;
}

int main()
{
    // FOR INT { every 't' will become int }
    // arathmatic<int > ar(15, 5 ) ;
    // cout<<"sum is "<< ar.sum()<<endl;
    // cout<<"diffrence is "<< ar.diff()<<endl;

    // FOR FLOAT {every 't' will become float }
    arathmatic<float>ar1(34.5,2.4);
    cout << "sum is " << ar1.sum() << endl;
    cout << "diffrence is " << ar1.diff() << endl;
}