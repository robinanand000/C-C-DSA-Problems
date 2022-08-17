#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};

void linkedlist_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));

    if (n == NULL)
    {
        printf("Queue is Full.\n");
    }
    else
    {
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        n->data = val;
        r->next = n;
        r = n;
        return val;
    }
}
int dequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty.\n");
    }

    f = f->next;
    val = ptr->data;
    free(ptr);
    return val;
}
int main()
{

    linkedlist_traversal(f);

    enqueue(43);
    enqueue(35);
    enqueue(82);
    linkedlist_traversal(f);
    printf("dequeuing element: %d\n", dequeue());
    printf("dequeuing element: %d\n", dequeue());
    printf("dequeuing element: %d\n", dequeue());
    printf("dequeuing element: %d\n", dequeue());
    linkedlist_traversal(f);
    return 0;
}