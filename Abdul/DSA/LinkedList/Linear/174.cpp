#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next; //self refrential structure
};

int main()
{
    struct node *start;
    start = new node;
    while (start->next != 0)
    {
        start->data = 45;
        start = start->next;
    }

    return 0;
}