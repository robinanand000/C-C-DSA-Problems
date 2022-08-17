#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//pushing the element in stack ..
int push(struct stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Stack overflow,cannot push anymore.\n");
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = val;  
        return val;
    }
}
//poping an element from stack..
int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack is empty,cannot pop anymore.\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return val;
    }
}
int peek(struct stack *s, int i)
{
    int ind = s->top - i + 1;
    if (ind < 0)
    {
        printf("Invalid position...");
        return -1;
    }
    else
    {
        return s->arr[ind];
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack *));
    s->size = 4;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("\n");

    printf("Stack before pushing. \n");

    printf("Full  : %d\n", isfull(s));
    printf("Empty : %d\n", isempty(s));
    printf("Stack after pushing. \n");
    printf("Pushed %d from the stack.\n", push(s, 7));
    printf("Pushed %d from the stack.\n", push(s, 11));
    printf("Pushed %d from the stack.\n", push(s, 3));
    printf("Pushed %d from the stack.\n", push(s, 4));

    printf("Full  : %d\n", isfull(s));
    printf("Empty : %d\n\n\n", isempty(s));

    // printf("Stack before poping. \n");
    // printf("Full  : %d\n", isfull(s));
    // printf("Empty : %d\n", isempty(s));

    // printf("Stack after poping. \n");
    // printf("Popped %d from stack.\n", pop(s));
    // printf("Popped %d from stack.\n", pop(s));
    // printf("Popped %d from stack.\n", pop(s));
    // printf("Popped %d from stack.\n", pop(s));

    // printf("Full  : %d\n", isfull(s));
    // printf("Empty : %d\n\n", isempty(s));

    for (int i = 1; i <= s->top + 1; i++)
    {
        printf("The value at position %d is %d.\n", i, peek(s, i));
    }
    return 0;
}