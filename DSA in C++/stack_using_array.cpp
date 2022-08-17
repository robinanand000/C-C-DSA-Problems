#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

void traversal(stack *ptr, int size)
{
    int i = size - 1;
    while (i != -1)
    {
        cout << "Element : " << ptr->arr[i] << endl;
        i--;
    }
}
int isfull(stack *ptr)
{
    if (ptr->top == (ptr->size) - 1)
    {
        return 1;
    }
    return 0;
}

int isempty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int push(stack *ptr, int val)
{
    if (isfull(ptr))
    {
        cout << "Stack is already full,can't push more." << endl;
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = val;
        return val;
    }
}

int pop(stack *ptr)
{
    if (isempty(ptr))
    {
        cout << "Stack is empty,can't pop more." << endl;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return val;
    }
}
int peek(stack *ptr, int ind)
{
    if (ind > ptr->top)
    {
        cout << "invalid index..";
    }
    return ptr->arr[ind];
}
int main()
{

    stack *s = (stack *)malloc(sizeof(stack *));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    cout << "stack before :" << endl;
    cout << "Full : " << isfull(s) << endl;
    cout << "Empty : " << isempty(s) << endl;
    cout << "stack after :" << endl;
    push(s, 2);
    push(s, 5);
    push(s, 9);
    push(s, 13);
    push(s, 15);
    // push(s, 15);
    cout << "Full : " << isfull(s) << endl;
    cout << "Empty : " << isempty(s) << endl;
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // cout << "Full : " << isfull(s) << endl;
    // cout << "Empty : " << isempty(s) << endl;
    traversal(s, s->size);
    cout << "Value at this index is " << peek(s, 2);

    return 0;
}