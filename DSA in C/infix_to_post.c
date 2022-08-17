#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

char push(struct stack *ptr, char data)
{
    if (isfull(ptr))
    {
        printf("Stack is overflow.\n");
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = data;
        return data;
    }
}

char pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("The stack is underflow.\n");
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return val;
    }
}

char stack_top(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int prec(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 1;
}
int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}
char *infix_to_post(char *infix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *post = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            post[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (isempty(s))
            {
                push(s, infix[i]);
                i++;
            }
            else if (prec(infix[i]) > prec(stack_top(s)))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                post[j] = pop(s);
                j++;
            }
        }
    }

    while (!isempty(s))
    {
        post[j] = pop(s);
        j++;
    }

    post[j] = '\0';
    return post;
}
int main()
{
    char *infix = "p-q-r/a";
    printf("Postfix :%s ", infix_to_post(infix));
    return 0;
}