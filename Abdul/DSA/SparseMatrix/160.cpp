#include <iostream>
using namespace std;

struct Element
{
    int i;
    int j;
    int x;
};
struct Sparce
{
    int m;
    int n;
    int num;
    struct Element *e;
};
void create(struct Sparce *s)
{
    cout << "\nEnter all the non-Zero element With Co-ordinates : ";
    s->e = new Element[s->num];
    for (int j = 1; j <= s->num; j++)
    {
        cout << "\ni : ";
        cin >> s->e[j].i;
        cout << "\nj : ";
        cin >> s->e[j].j;
        cout << "\nx : ";
        cin >> s->e[j].x;
        // scanf("%d%d%d", &s->e[j].i, &s->e[j].j, &s->e[j].x);
    }
}
void print(struct Sparce spa)
{
    int k = 1;
    for (int l = 1; l <= spa.m; l++)
    {
        for (int j = 1; j <= spa.n; j++)
        {
            if (l == spa.e[k].i && j == spa.e[k].j)
            {
                cout << spa.e[k++].x << "\t";
            }
            else
            {
                cout << "0\t";
            }
        }
        cout << "\n";
    }
}
int main()
{
    struct Sparce sp;
    cout << "\nEnter Dimension : ";
    cin >> sp.m >> sp.n;
    cout << "\nEnter the number of non-Zero element : ";
    cin >> sp.num;
    create(&sp);
    print(sp);
    return 0;
}