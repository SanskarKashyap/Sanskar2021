// C++ program to delete all the nodes from the list
// that are divisible by  the specified value K
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *getNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void deleteDivisibleNodes(Node **head_ref, int K)
{
    Node *temp = *head_ref, *prev;

    while (temp != NULL && temp->data % K == 0)
    {
        *head_ref = temp->next; // Changed head
        free(temp);             // free old head
        temp = *head_ref;       // Change temp
    }

    while (temp != NULL)
    {
        while (temp != NULL && temp->data % K != 0)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
            return;

        prev->next = temp->next;

        delete temp;
        temp = prev->next;
    }
}

void printList(Node *head)
{
    while (head)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
}
int main()
{
    // Create list: 12->15->9->11->5->6->7
    Node *head = getNode(12);
    head->next = getNode(15);
    head->next->next = getNode(9);
    head->next->next->next = getNode(11);
    head->next->next->next->next = getNode(5);
    head->next->next->next->next->next = getNode(6);
    head->next->next->next->next->next->next = getNode(7);
    int K = 3;

    printf("Initial List: ");
    printList(head);

    deleteDivisibleNodes(&head, K);

    printf("\nFinal List: ");
    printList(head);

    return 0;
}