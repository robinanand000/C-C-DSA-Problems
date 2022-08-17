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

struct node *insert_atfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct node *insert_atindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node *p = head;
    int i = 0;
    while (i != (index - 1))
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insert_atend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insert_afternode(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    
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
    // head=insert_atfirst(head,56);

    // head=insert_atindex(head,56,2);

    // head = insert_atend(head, 56);
    head = insert_afternode(head, second, 56);
    linkedlist_traversal(head);
    return 0;
}