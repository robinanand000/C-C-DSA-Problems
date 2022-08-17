#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *top = NULL;

void traversal(node *top)
{
    node *ptr = top;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int isempty(node *ptr)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
node *push(node *top, int data)
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr->data = data;
    ptr->next = top;
    top = ptr;
    return top;
}
node *pop(node *top)
{
    if (isempty(top))
    {
        cout << "stack is empty ,can't pop ." << endl;
    }
    else
    {
        node *ptr = top;
        int val = ptr->data;
        top = top->next;
        free(ptr);
        return top;
    }
}
int peek(node *top, int ind)
{
    node *ptr = top;
    int i = 0;
    while (ptr != NULL)
    {
        if (i == ind)
        {
            return ptr->data;
        }
        ptr = ptr->next;
        i++;
    }
}
int main()
{
    top = push(top, 2);
    top = push(top, 5);
    top = push(top, 8);
    top = push(top, 9);
    traversal(top);
    cout << endl;
    // top = pop(top);
    // top = pop(top);
    // top = pop(top);
    // top = pop(top);
    // traversal(top);
    // cout << peek(top, 2);

    return 0;
}