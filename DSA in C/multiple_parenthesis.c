#include <stdio.h>
#include <stdlib.h>

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

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    else if (a == '{' && b == '}')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int check(char *exp)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack *));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isempty(sp))
            {
                printf("Unbalanced equation.\n");
                return 0;
            }
            else
            {
                char popped_char = pop(sp);
                if (!match(popped_char, exp[i]))
                {
                    printf("Unbalanced equation.\n");
                    return 0;
                }
            }
        }
    }
    if (isempty(sp))
    {
        printf("Balanced equation.\n");
        return 1;
    }
    else
    {
        printf("Unbalanced equation.\n");
        return 0;
    }
}
int main()
{
    char *exp = "[{3*2)-(8+1}]";
    check(exp);
    return 0;
}