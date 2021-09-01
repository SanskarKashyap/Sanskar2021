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
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void iDisplay(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next, p->next;
    }
}

int main()
{
    struct Node *temp;
    int *A;
    A = (int *)malloc(sizeof(int));
    int c = 1, i = 0;
    while (c == 1)
    {
        printf("Enter element : ");
        scanf("%d", &A[i]);
        create(A, i);
        i++;
        printf("Press 1 to countinue filling Element : ");
        scanf("%d", &c);
    }
    Display(first);
    printf("\n\n");
    iDisplay(first);
    printf("\n\n");
    return 0;
}