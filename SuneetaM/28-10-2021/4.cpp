#include <bits/stdc++.h>
using namespace std;

class String
{
    char *s;
    int n;

public:
    String()
    {
        s = NULL;
        n = 0;
    }

    String(const char *x)

    {
        n = strlen(x);
        s = new char[n + 1];
        strcpy(s, x);
    }

    String(const String &c)
    {
        n = c.n;
        s = c.s;
    }

    String operator+(String s1)
    {

        String res;
        res.n = n + s1.n;

        res.s = new char[res.n + 1];
        strcpy(res.s, s);
        strcat(res.s, s1.s);

        return res;
    }

    String operator=(String s1)
    {
        String res;
        res.n = s1.n;
        res.s = new char[res.n + 1];
        strcpy(res.s, s1.s);
        return res;
    }
    void display()
    {
        cout << s << endl;
    }
};
int main()
{
    String s1("SANSKAR");
    String s2("KASHYAP");

    cout << "First string is : ";
    s1.display();

    cout << "Second string is : ";
    s2.display();

    cout << "The resultant string is : ";

    String ans = s1 + s2;
    ans.display();

    String s4 = s1;
    cout << "Te copied string is : ";
    s4.display();

    return 0;
}
