
// Find middle element in doubly linked list
#include <stdio.h>

#include <stdlib.h> //for malloc function

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL, *tail = NULL;

void insert(int value)
{

    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if (node == NULL)
    {
        printf("Memory overflow\n");
    }
    else
    {
        node->data = value;
        node->next = NULL;
        node->prev = NULL;
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            node->prev = tail;
            tail->next = node;

            tail = node;
        }
    }
}
void display()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("Empty linked list");
    }
    else
    {

        printf("\n Head to Tail Nodes : \n");
        while (temp != NULL)
        {
            printf("%3d", temp->data);
            temp = temp->next;
        }
        printf("\n Tail to Head Nodes : \n");

        temp = tail;

        while (temp != NULL)
        {
            printf("%3d", temp->data);
            temp = temp->prev;
        }
    }
}
void middle_node()
{
    if (head != NULL)

    {

        struct Node *slow = head, *fast = head;

        while (fast != NULL && fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        printf("\n Middle : %d\n", slow->data);
    }
    else
    {
        printf("Empty linked list");
    }
}

int main()
{

    // insert(1);
    // insert(2);
    // insert(3);
    // insert(4);
    // insert(5);
    // insert(6);

    static int x = 0;
    do
    {
        printf("\nEnter a Data : ");
        int k;
        scanf("%d", &k);
        insert(k);
        printf("\n Do you want to continue ? 1 : 0  --> ");
        scanf("%d", &x);
    } while (x != 0);

    display(); // Display all node

    middle_node();

    insert(7);
    display();
    middle_node();
    printf("\n");
    return 0;
}