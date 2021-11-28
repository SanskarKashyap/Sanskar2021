#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Insert(int x)
{
    struct Node *m, *t, *n;
    m = first;
    t = (struct Node *)malloc(sizeof(struct Node));
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

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int count(struct Node *coun)
{
    coun = first;
    int count = 0;
    while (coun)
    {
        count++;
        coun = coun->next;
    }
    return count;
}

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > count(p))
        return -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}

int main()
{

    // int A[] = {10, 20, 30, 40, 50};
    Insert(16);
    Insert(26);
    Insert(36);
    Insert(46);
    Insert(56);
    // create(A, 5);

    printf("%d\n", Delete(first, 1));
    Display(first);

    return 0;
}
