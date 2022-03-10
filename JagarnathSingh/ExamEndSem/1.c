
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data)
{

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref); // link the old list off the new node

    (*head_ref) = new_node; // move head to new node
}

int count(struct Node *head, int search_for)
{
    struct Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        if (current->data == search_for)
            count++;
        current = current->next;
    }
    return count;
}

int main()
{

    struct Node *head = NULL; // empty list

    static int x = 0;
    do
    {
        printf("\nEnter a Data : ");
        int k;
        scanf("%d", &k);
        push(&head, k);
        printf("\n Do you want to continue ? 1 : 0  --> ");
        scanf("%d", &x);
    } while (x != 0);

    int a;
    printf("\nEnter a number to count : ");
    scanf("%d", &a);
    printf("\ncount of %d is %d", a, count(head, a)); // count function
    return 0;
}
