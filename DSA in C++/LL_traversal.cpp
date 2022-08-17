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
    return 0;
}