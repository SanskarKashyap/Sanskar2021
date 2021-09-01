#include <iostream>
using namespace std;
struct Element
{
    int i;
    int j;
    int x;
};
struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *ele;
};
void create(struct Sparse *s1)
{
    cout << "\nEnter Dimension : ";
    cin >> s1->m;
    cin >> s1->n;
    cout << "\nEnter the number of non-Zero element : ";
    cin >> s1->num;
    s1->ele = new Element[s1->num];
    for (int i = 1; i <= s1->num; i++)
    {
        cout << "\ni : ";
        cin >> s1->ele[i].i;
        cout << "\nj : ";
        cin >> s1->ele[i].j;
        cout << "\nx : ";
        cin >> s1->ele[i].x;
    }
}
void print(struct Sparse s)
{
    int k = 1;
    for (int i = 1; i <= s.m; i++)
    {
        for (int j = 1; j <= s.n; j++)
        {
            if (i == s.ele[k].i && j == s.ele[k].j)
            {
                cout << s.ele[k++].x << "\t";
            }
            else
                cout << "0\t";
        }
        cout << endl;
    }
}
Sparse Sum(Sparse *s1, struct Sparse *s2)
{
    struct Sparse add;
    int i = 1, j = 1, k = 1;
    if (s1->m != s2->m || s1->n != s2->n)
    {
        // return NULL;
    }
    add.m = s1->m;
    add.n = s1->n;
    add.num = s1->num + s2->num;
    add.ele = new Element[add.num];
    while (i <= s1->num && j <= s2->num)
    {
        if (s1->ele[i].i < s2->ele[j].i)
        {
            add.ele[k++].x = s1->ele[i++].x;
        }
        else if (s1->ele[i].i > s2->ele[j].i)
        {
            add.ele[k++].x = s1->ele[j++].x;
        }
        else
        {
            if (s1->ele[i].j < s2->ele[j].j)
            {
                add.ele[k++].x = s1->ele[i++].x;
            }
            else if (s1->ele[i].j > s2->ele[j].j)
            {
                add.ele[k++].x = s1->ele[j++].x;
            }
            else
                add.ele[k++].x = s1->ele[i++].x + s2->ele[j++].x;
        }
    }
    return add;
};
int main()
{
    struct Sparse s1, s2, s3;
    create(&s1);
    print(s1);
    create(&s2);
    print(s1);
    s3 = Sum(&s1, &s2);
    print(s3);

    return 0;
}