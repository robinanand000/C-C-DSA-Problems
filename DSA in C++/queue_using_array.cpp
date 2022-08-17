#include <iostream>
using namespace std;
struct queue
{
    int size;
    int f;
    int b;
    int *arr;
};

void traversal(queue *q)
{
    int i = q->f + 1;
    while (i != q->b + 1)
    {
        cout << "Element : " << q->arr[i] << endl;
        i++;
    }
    cout << endl;
}
int isfull(queue *q)
{
    if (q->b == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isempty(queue *q)
{
    if (q->f == q->b)
    {
        return 1;
    }
    return 0;
}
void enqueue(queue *ptr, int data)
{
    if (isfull(ptr))
    {
        cout << "Queue overflow.";
    }
    else
    {
        ptr->b = ptr->b + 1;
        ptr->arr[ptr->b] = data;
    }
}
int dequeue(queue *ptr)
{
    int a = -1;
    if (isempty(ptr))
    {
        cout << "queue is empty.";
    }
    else
    {
        ptr->f = ptr->f + 1;
        a = ptr->arr[ptr->f];
        return a;
    }
    if (ptr->f == ptr->b)
    {
        ptr->f = ptr->b = -1;
    }
}
int main()
{
    queue *q;
    q->size = 100;
    q->f = q->b = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    enqueue(q, 2);
    enqueue(q, 5);
    enqueue(q, 7);
    enqueue(q, 9);
    traversal(q);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    traversal(q);
    return 0;
}