#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Display(struct Node *p)
{
    struct Node *temp = p;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
        if (p != NULL)
            p = p->next;
    }
    printf("\n");
    temp = temp->next;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        if (temp != NULL)
            temp = temp->next;
    }
}

void createnextedList(int arr[], int n)
{
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    struct Node *last = first, *temp;
    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        (*temp).data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    createnextedList(arr, n);
    Display(first);
    return 0;
}