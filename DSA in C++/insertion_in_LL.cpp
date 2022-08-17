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
node *insert_first(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
node *insert_index(node *head, int data, int index)
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *p = head;
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

node *insert_end(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
node *insert_afternode(node *head, node *prevnode, int data)
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
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
    // head = insert_first(head, 56);
    // head = insert_index(head, 56, 2);
    // head = insert_end(head, 56);
    head = insert_afternode(head, third, 56);
    traversal(head);
    return 0;
}