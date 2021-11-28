#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
} *front = NULL, *rear = NULL;
void insert(int item);
int del();
int peek();
int isEmpty();
void display();
int main()
{
    int choice, item;
    while (1)
    {
        printf("1. Insert\n");
        printf("2. delete\n");
        printf("3. Display all element is the front \n");
        printf("4.Display all the element in a queues\n");
        printf("5. quit\n");
        printf("Enter your choice  :");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input the element for add in queue :\n");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            printf("deleted element is %d\n", del());
            break;
        case 3:
            printf("Element at the foront of queue is %d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Wrong choice \n");
        }
    }
    return 0;
}
void insert(int item)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    if (tmp == NULL)
    {
        printf("Memory ant available");
        return;
    }
    tmp->info = item;
    tmp->link = NULL;
    if (front == NULL)
        front = tmp; // if queue is empty.
    else
        rear->link = tmp;
    rear = tmp;
    // end of insert ()
}
int del()
{
    struct node *tmp;
    int item;
    if (isEmpty())
    {
        printf(" queue underflow");
        exit(1);
    }
    tmp = front;
    item = tmp->info;
    front = front->link;
    free(tmp);
    return item;
} // end of del
int peek()
{
    if (isEmpty())
    {
        printf(" queue underflow");
        exit(1);
    }
    return front->info;
}
int isEmpty()
{
    if (front == NULL)
        return 1;
    else
        return 0;
} // end of isEmpty
void display()
{
    struct node *ptr;
    ptr = front;
    if (isEmpty())
    {
        printf("Queue is empty \n");
        return;
    }
    printf("Queue element : \n\n");
    while (ptr != NULL)
    {
        printf("%d", ptr->info);
        ptr = ptr->link;
    }
    printf("\n\n\n");
} // end of display()
