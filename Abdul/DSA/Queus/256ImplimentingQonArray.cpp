#include <iostream>
using namespace std;

struct Queue
{
    int sizze;
    int front;
    int rear;
    int *Q;
};
void Create(struct Queue *q, int size)
{
    q->sizze = size;
    q->front = q->rear = -1;
    q->Q = new int[q->sizze];
}
void enqueue(struct Queue *q, int x)
{
    if (q->rear == q->sizze - 1)
    {
        cout << "\nQueue is Full\n";
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int Dequeue(struct Queue *q)
{
    int x = -1;
    if (q->rear == q->front)
    {
        cout << "\nQueue is Empty \n";
    }
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
void Display(struct Queue *q)
{
    for (int i = q->front + 1; i <= q->rear; i++)
    {
        cout << q->Q[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Queue q;
    Create(&q, 5);
    enqueue(&q, 45);
    enqueue(&q, 15);
    enqueue(&q, 25);
    enqueue(&q, 35);
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    Display(&q);
    return 0;
}