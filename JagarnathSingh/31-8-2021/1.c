#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head, *tail = NULL;

void addNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    if (head == NULL)
    {
        head = tail = newNode;
        head->prev = NULL;
        tail->next = NULL;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        tail->next = NULL;
    }
}

void displayFront()
{
    struct node *current = head;
    if (head == NULL)
    {
        printf("List is emtpy \n");
        return;
    }
    printf("\nNodes of double linked list : ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}
void displayBack()
{
    struct node *current = tail;
    if (head == NULL)
    {
        printf("List is emtpy\n");
        return;
    }
    printf("\nNodes of double linked list : ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->prev;
    }
}
int main()
{

    addNode(1);
    addNode(12);
    addNode(23);
    addNode(34);
    addNode(45);
    printf("\nIn forward direction ");
    displayFront();
    printf("\nIn backward direction ");
    displayBack();
    printf("\n\n");

    return 0;
}
