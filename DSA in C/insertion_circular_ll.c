#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlist_traversal(struct node * head)
{
    struct node *ptr = head;
    do
    {
        printf("Element is %d.\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insert_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = data;

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head=ptr;
    return head;
}
int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node *));
    struct node *second = (struct node *)malloc(sizeof(struct node *));
    struct node *third = (struct node *)malloc(sizeof(struct node *));
    struct node *fourth = (struct node *)malloc(sizeof(struct node *));

    head->data = 4;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = head;

    linkedlist_traversal(head);
    head = insert_first(head, 56);

    printf("\n");
    linkedlist_traversal(head);

    return 0;
}