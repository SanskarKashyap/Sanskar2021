#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class Linnklist
{
private:
    node *first;
    node *second;

public:
    Linnklist();
    void Create_Linnklist(int *A, int n);
    void Display_Linnklist();
    void ReverseLink();
    int CheakLoop(node *cl);
    node *Merge();
    void Insert(int x);
    int delete_first();
    int count();
    void Delete_pos(int pos);
    int Shorted_cheak();
    void Remove_Duplicate();
    node *GetFNode();

    ~Linnklist();
};

node *Linnklist::GetFNode()
{
    return first;
}
Linnklist::Linnklist()
{
    first = NULL;
}

void Linnklist::Create_Linnklist(int *A, int n)
{
    node *t, *last;
    first = new node;
    first->data = A[0];
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Linnklist::Display_Linnklist()
{
    node *Dis;
    Dis = first;
    while (Dis)
    {
        cout << Dis->data << "\t";
        Dis = Dis->next;
    }
    cout << endl;
}

Linnklist::~Linnklist()
{
    node *del, *del2;
    del = first;
    while (del)
    {
        del2 = del;
        del = del->next;
        delete del2;
        cout << "LinkList is Deleted" << endl;
    }
}

void Linnklist::ReverseLink()
{
    node *p = NULL, *q = NULL, *r;
    p = first;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

int Linnklist::CheakLoop(node *cl)
{
    node *n1, *n2;
    n1 = n2 = cl;
    do
    {
        n1 = n1->next;
        n2 = n2->next;
        n2 = n2 ? n2->next : NULL;

    } while (n1 && n2 && n1 != n2);
    return n1 == n2 ? 1 : 0;
}

// node Linnklist:: *Merge()
// {
//     node *third, *last;
//     third = new node;
//     if (first->data < second->data)
//     {
//         third = last = first;
//         first = first->next;
//         last->next = NULL;
//     }
//     else
//     {
//         third = last = second;
//         second = second->next;
//         last->next = NULL;
//     }
//     while (first != NULL && second != NULL)
//     {
//         if (first->data < second->data)
//         {
//             last->next = first;
//             last = first;
//             first = first->next;
//             last->next = NULL;
//         }
//         else
//         {
//             last->next = second;
//             last = second;
//             second = second->next;
//             last->next = NULL;
//         }
//     }
//     if (first != NULL)
//     {
//         last->next = first;
//     }
//     else
//     {
//         last->next = second;
//     }
//     return third;
// }

void Linnklist::Insert(int x)
{
    node *m, *t, *n;
    m = first;
    t = new node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
        first->next = NULL;
    }
    else
    {
        while (m && m->data < x)
        {
            n = m;
            m = m->next;
        }
        if (m == first)
        {
            first = t;
            t->next = m;
        }
        else
        {
            n->next = t;
            t->next = m;
        }
    }
}

int Linnklist::delete_first()
{
    node *q;
    q = first;
    int x = first->data;
    first = first->next;
    delete q;
    return x;
}

int Linnklist::count()
{
    node *coun;
    coun = first;
    int count = 0;
    while (coun)
    {
        count++;
        coun = coun->next;
    }
    return count;
}

void Linnklist::Delete_pos(int pos)
{
    node *p, *q;
    p = new node;
    q = new node;
    p = first;
    int position = 0;

    if (pos > -1 && pos < count())
    {

        while (pos != position)
        {
            q = p;
            p = p->next;
            position++;
        }
        q->next = p->next;
        delete p;
    }
}

int Linnklist::Shorted_cheak()
{
    node *ch;
    ch = new node;
    int x = INT16_MIN;
    ch = first;
    while (ch)
    {
        if (x > ch->data)
        {
            return -1;
        }
        else
        {
            x = ch->data;
            ch = ch->next;
        }
    }
    return 1;
}

void Linnklist::Remove_Duplicate()
{
    node *p, *q;
    p = new node;
    q = new node;
    q = first;
    p = first->next;

    while (p)
    {
        if (q->data == p->data)
        {
            q->next = p->next;
            free(p);
            p = q->next;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
}

int main()
{
    Linnklist All;
    int A[] = {4, 6, 9, 9, 13, 25, 36, 43};
    All.Create_Linnklist(A, 8);
    All.Display_Linnklist();
    All.ReverseLink();
    All.Display_Linnklist();
    All.count();
    All.delete_first();
    All.Display_Linnklist();
    All.Remove_Duplicate();
    All.Display_Linnklist();
    All.Delete_pos(4);
    All.Display_Linnklist();
    All.Insert(30);
    All.Display_Linnklist();
    cout << All.CheakLoop(All.GetFNode()) << endl;
    return 0;
}