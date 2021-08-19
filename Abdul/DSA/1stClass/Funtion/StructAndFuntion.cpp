#include <stdio.h>
class ractangle
{
private:
    int length, breadth;

public:
    // void inicilize( int a, int b)
    // {
    //     length = a;
    //     breadth = b;
    // }

    ractangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        printf("\n Area is %d \n", breadth * length);
    }
    void changelength(int n)
    {
        length = n;
        printf("\n(formal  parameter) %d\n", length);
    }
    int getl(){
        return length;
    }
};

int main()
{
    //  ractane r;              {construter is object creater and inisialiser}
    // r.inicilize( 10, 5);     {let do this by the use of constructer}

    ractangle r(10, 5);

    r.area();
    r.changelength(25);
    r.area();
    printf("\n(actual parameter) %d\n", r.getl()); 
    return 0;
}
