#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *ptr)

{
    if ((ptr->r + 1) % ptr->size == ptr->f)
    {
        return 1;
    }
    return 0;
}
int isempty(struct queue *ptr)
{
    if (ptr->f == ptr->r)
    {
        return 1;
    }
    return 0;
}

int enqueue(struct queue *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Queue is Full.\n");
        return 0;
    }
    ptr->r = (ptr->r + 1) % ptr->size;
    ptr->arr[ptr->r] = val;
    return val;
}
int dequeue(struct queue *ptr)
{
    if (isempty(ptr))
    {
        printf("Queue is Empty.\n");
        return 0;
    }
    int a = -1;
    ptr->f = (ptr->f + 1) % ptr->size;
    a = ptr->arr[ptr->f];
    return a;
}

int main()
{

    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 100;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("Queue element 1: %d\n", enqueue(q, 46));
    printf("Queue element 2: %d\n", enqueue(q, 50));
    printf("Queue element 3: %d\n", enqueue(q, 32));
    printf("Queue element 1: %d\n", dequeue(q));
    printf("Queue element 2: %d\n", dequeue(q));
    printf("Queue element 3: %d\n", dequeue(q));

    printf("Full  :%d\n", isfull(q));
    printf("Empty :%d\n", isempty(q));
    return 0;
}