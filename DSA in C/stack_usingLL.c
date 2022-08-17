#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

void linkedlist_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int isFull(struct node *top)
{
    struct node *n = (struct node *)malloc(sizeof(struct node *));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
struct node *push(struct node *top, int data)
{

    if (isFull(top))
    {
        printf("Stack overflow.\n");
    }
    else
    {
        struct node *p = (struct node *)malloc(sizeof(struct node *));
        p->data = data;
        p->next = top;
        top = p;
        return top;
    }
}

struct node *pop(struct node *tp)
{
    if (isEmpty(tp))
    {
        printf("Stack underflow.\n");
    }
    else
    {
        struct node *p = tp;
        int x = p->data;
        top = tp->next;
        free(p);
        return x;
    }
}
int main()
{

    top = push(top, 4);
    top = push(top, 7);
    top = push(top, 11);
    linkedlist_traversal(top);
    pop(top);
    printf("\n");
    linkedlist_traversal(top);

    return 0;
}