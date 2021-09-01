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
int main()
{
    struct Node *temp;
    int *A;
    int n;
    printf("Enter the no of element : ");
    scanf("%d", &n);
    A = (int *)malloc(n * sizeof(int));
    printf("Enter element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, n);
    Display(first);
    printf("\n\n");

    return 0;
}