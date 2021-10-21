#include <iostream>
using namespace std;
class sports
{
public:
    int sm;
    sports() {}
};

class test
{
public:
    int m;
    test() {}
};

class result : public sports, public test
{
public:
    int tot;
    float per;
    result() {}
    result(int i, int j)
    {
        sm = i;
        m = j;
    }
    void display()
    {
        tot = sm + m;
        cout << " Total Marks of Student : " << tot << endl;
        per = (float)tot / 2;
        cout << " Total Persentage of Student : " << per << endl;
    }
};
int main()
{
    int a, b;
    cout << "inter sports marks : ";
    cin >> a;
    cout << "inter marks : ";
    cin >> b;
    result r(a, b);
    r.display();
}