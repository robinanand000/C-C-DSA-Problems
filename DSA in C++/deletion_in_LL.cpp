#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void traversal(node *ptr)
{

    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
node *delete_first(node *head)
{
    node *p = head;
    head = p->next;
    free(p);
    return head;
}
node *delete_index(node *head, int index)
{
    node *p = head;
    int i = 0;
    while (i != (index - 1))
    {
        p = p->next;
        i++;
    }
    node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

node *delete_end(node *head, int data)
{
    node *p = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
node *delete_afternode(node *head, node *prevnode)
{
    node *p = prevnode->next;
    prevnode->next = p->next;
    free(p);
    return head;
}
int main()
{
    node *head = (node *)malloc(sizeof(node *));
    node *second = (node *)malloc(sizeof(node *));
    node *third = (node *)malloc(sizeof(node *));
    node *forth = (node *)malloc(sizeof(node *));

    head->data = 2;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 9;
    third->next = forth;

    forth->data = 13;
    forth->next = NULL;

    traversal(head);
    cout << endl;
    // head = delete_first(head);
    // head = delete_index(head, 1);
    // head = delete_end(head, 56);
    head = delete_afternode(head, second);
    traversal(head);
    return 0;
}