#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
struct node
{
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node *deleteDuplicates(node *head)
{

    node *p = head;
    node *q = head->next;
    while (q != NULL)
    {

        if (p->data == q->data && p == head)
        {
            head = q;
            free(p);
            p = p->next;
            q = q->next;
        }
        else if (q->data == q->next->data)
        {
            p->next = q->next;
            free(q);
            p = p->next;
            q = q->next;
        }
    }
    return head;
}
void traversal(node *ptr)
{

    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    node *head = new node(1);
    node *second = new node(1);
    node *third = new node(2);
    node *forth = new node(3);
    node *fifth = new node(3);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    traversal(head);
    node *newhead= deleteDuplicates(head);
    traversal(newhead);
    return 0;
}