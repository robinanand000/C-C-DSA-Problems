#include <stdio.h>
#include <stdlib.h>
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

struct node *delete_first(struct node *head)
{
    struct node *p = head;

    head = head->next;
    free(p);
    return head;
}
struct node *delete_index(struct node *head, int index)
{
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}
struct node *delete_end(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct node *delete_afternode(struct node *head, struct node *prevnode)
{
    struct node *p = prevnode->next;
    prevnode->next = p->next;
    free(p);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node *));
    second = (struct node *)malloc(sizeof(struct node *));
    third = (struct node *)malloc(sizeof(struct node *));
    fourth = (struct node *)malloc(sizeof(struct node *));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 41;
    fourth->next = NULL;
    linkedlist_traversal(head);
    printf("\n");
    // head=delete_first(head);

    // head=delete_index(head,2);

    head = delete_end(head);
    // head = delete_afternode(head, second);
    linkedlist_traversal(head);
    return 0;
}