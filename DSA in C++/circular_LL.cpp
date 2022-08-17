#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void traversal(node *head)
{
    node *ptr = head;
    do
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
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
    forth->next = head;
    traversal(head);
    cout << endl;
    head = insert_afternode(head, second, 56);
    traversal(head);
    return 0;
}