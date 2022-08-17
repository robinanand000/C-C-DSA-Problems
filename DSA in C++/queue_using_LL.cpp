#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *f = NULL;
node *b = NULL;
void traversal(node *ptr)
{

    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int enqueue(int data)
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr->next = NULL;
    if (f == NULL)
    {
        f = b = ptr;
    }
    ptr->data = data;
    b->next = ptr;
    b = ptr;
    return data;
}

int dequeue()
{
    node *ptr = f;
    if (f == NULL)
    {
        cout << "Queue is empty." << endl;
    }
    int val = ptr->data;
    f = ptr->next;
    free(ptr);
    return val;
}
int main()
{
    enqueue(4);
    enqueue(1);
    enqueue(6);
    enqueue(9);
    traversal(f);
    dequeue();
    dequeue();
    // dequeue();
    // dequeue();
    cout << endl;
    traversal(f);
    return 0;
}