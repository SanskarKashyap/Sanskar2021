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
        front = rear = 0;
        Q = new int[sizze];
    }

    void enqueue(int x);
    int Dequeue();
    void Display();
};

void Queue::enqueue(int x)

{
    if ((rear + 1) % size == front)
    {
        cout << "\nQueue is Full\n";
    }
    else
    {
        rear = (rear + 1) % size;
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
        front = (front + 1) % size;
        x = Q[front];
    }

    return x;
}

void Queue::Display()
{
    int i = front + 1;
    do
    {
        cout << " " << Q[i] << flush;
        if (i < rear)
        {
            cout << " <- " << flush;
        }
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
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
    // q.Display();
    return 0;
}