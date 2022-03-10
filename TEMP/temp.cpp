#include <bits/stdc++.h>
using namespace std;
class cricketer
{
    char name[20];
    int age;
    int jersy;
    int odi;

public:
    cricketer(char *n, int a, int j, int o)
    {
        strcpy(name, n);
        age = a;
        jersy = j;
        odi = o;
    }
    void display()
    {
        cout << "\nname of cricketer: " << name;
        cout << "\nage of cricketer: " << age;
        cout << "\njersey no. of cricketer: " << jersy;
        cout << "\nno. of ODIs played by cricketer: " << odi;
    }
};
class batsman : public cricketer
{
    int rt, hc, c, hs, ns;

public:
    batsman(char *n, int a, int j, int o, int r, int hc1, int c1, int hs1, int ns1) : cricketer(n, a, j, o)
    {
        rt = r;
        hc = hc1;
        c = c1;
        hs = hs1;
        ns = ns1;
    }
    void display()
    {
        cricketer::display();
        cout << "\nrunstaken: " << rt;
        cout << "\nno. of half centuries: " << hc;
        cout << "\nno. of centuries: " << c;
        cout << "\nhighest score: " << hs;
        cout << "\ntotal no. of sixes: " << ns;
    }
};
// class baller : public cricketer
// {
//     char type[5];
//     int wt, s;

// public:
//     baller(char *n, int a, int j, int o, char *t, int w, int s1) : cricketer(n, a, j, o)
//     {
//         strcpy(type, t);
//         wt = w;
//         s = s1;
//     }
//     void display()
//     {
//         cricketer::display();
//         cout << "\nballer type: " << type;
//         cout << "\ntotal no. of wickets taken: " << wt;
//         cout << "\nspeed of baller: " << s << "km/h";
//     }
// };
int main()
{
    char n1[20], n2[20], t1[5];
    int age1, age2, jersy1, jersy2, odi1, odi2, rt1, hc1, c1, hs1, ns1, wt1, s1;
    ;
    cout << "\nfor batsman: ";
    cout << "\nenter the batsman's name,age,jersy number and no. of ODIs played respectively: ";
    cin >> n1 >> age1 >> jersy1 >> odi1;
    cout << "\nenter the runstaken,no. of half centuries and centuries,highest score,no. of sixes: ";
    cin >> rt1 >> hc1 >> c1 >> hs1 >> ns1;
    batsman bt(n1, age1, jersy1, odi1, rt1, hc1, c1, hs1, ns1);
    bt.display();
    // cout << "\n\nfor baller: ";
    // cout << "\nenter the baller's name,age,jersy number and no. of ODIs played respectively: ";
    // cin >> n2 >> age2 >> jersy2 >> odi2;
    // cout << "\nenter the type of baller,total no. of wickets taken and speed of baller: ";
    // cin >> t1 >> wt1 >> s1;
    // baller bl(n2, age2, jersy2, odi2, t1, wt1, s1);
    // bl.display();
    return 0;
}