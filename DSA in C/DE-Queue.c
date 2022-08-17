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
    if (ptr->r == ptr->size - 1)
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

int enqueue_R(struct queue *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Queue is Full.\n");
        return 0;
    }
    ptr->r = ptr->r + 1;
    ptr->arr[ptr->r] = val;
    return val;
}
int enqueue_F(struct queue *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Queue is Full.\n");
        return 0;
    }
    ptr->f = ptr->f - 1;
    ptr->arr[ptr->f] = val;
    return val;
}
int dequeue_F(struct queue *ptr)
{
    if (isempty(ptr))
    {
        printf("Queue is Empty.\n");
        return 0;
    }
    int a = -1;
    ptr->f = ptr->f + 1;
    a = ptr->arr[ptr->f];
    return a;
}
int dequeue_R(struct queue *ptr)
{
    if (isempty(ptr))
    {
        printf("Queue is Empty.\n");
        return 0;
    }
    int a = -1;
    a = ptr->arr[ptr->r];
    ptr->r = ptr->r - 1;
    return a;
}

int main()
{

    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 100;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("Queue element 1: %d\n", enqueue_R(q, 46));
    printf("Queue element 2: %d\n", enqueue_R(q, 50));
    printf("Queue element 3: %d\n", enqueue_R(q, 32));
    printf("Queue element 4: %d\n", enqueue_F(q, 3));
    printf("Queue element 5: %d\n", enqueue_F(q, 5));
    printf("Queue element 6: %d\n", enqueue_F(q, 9));

    printf("Queue element 1: %d\n", dequeue_F(q));
    printf("Queue element 2: %d\n", dequeue_F(q));
    printf("Queue element 3: %d\n", dequeue_F(q));
    printf("Queue element 4: %d\n", dequeue_R(q));
    printf("Queue element 5: %d\n", dequeue_R(q));
    printf("Queue element 6: %d\n", dequeue_R(q));

    printf("Full  :%d\n", isfull(q));
    printf("Empty :%d\n", isempty(q));
    return 0;
}