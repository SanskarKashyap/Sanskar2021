#include <iostream>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue(int sizze)
    {
        size = sizze;
        front = rear = -1;
        Q = new int[sizze];
    }

    void enqueue(int x);
    int Dequeue();
    void Display();
};

void Queue::enqueue(int x)

{
    if (rear == size - 1)
    {
        cout << "\nQueue is Full\n";
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}
int Queue::Dequeue()
{
    int x = -1;
    if (rear == front)
    {
        cout << "\nQueue is empty\n";
    }
    else
    {
        front++;
        x = Q[front];
    }

    return x;
}
void Queue::Display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl;
}

int main()
{
    class Queue q(5);

    q.enqueue(45);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    q.Display();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Display();
    return 0;
}