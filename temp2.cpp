#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    int size;
    Node *next;
    Node(){};
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
} top = NULL;
void push(int element)
{
    Node *newNode;
    newNode = new Node;
    newNode->next
}