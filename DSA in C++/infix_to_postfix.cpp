#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    char *arr;
};
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

char push(stack *ptr, char ch)
{
    if (isfull(ptr))
    {
        cout << "Stack is already full,can't push more." << endl;
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = ch;
        return ch;
    }
}
char stack_top(stack *ptr)
{
    return ptr->arr[ptr->top];
}
char pop(stack *ptr)
{
    if (isempty(ptr))
    {
        cout << "Stack is empty,can't pop more." << endl;
    }
    else
    {
        char ch = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return ch;
    }
}
int prec(char ch)
{
    if (ch == '/')
    {
        return 5;
    }
    else if (ch == '*')
    {
        return 4;
    }
    else if (ch == '+')
    {
        return 3;
    }

    else if (ch == '-')
    {
        return 2;
    }

    else
        return 1;
}

int isoperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-')
    {
        return 1;
    }
    return 0;
}
char *infix_to_post(char *exp)
{
    stack *s = (stack *)malloc(sizeof(stack *));
    s->size = 100;
    s->top - 1;
    s->arr = (char *)malloc(s->size * sizeof(char *));
    char *post = (char *)malloc(sizeof(exp) * sizeof(char *));
    int i = 0;
    int j = 0;
    while (exp[i] != '\0')
    {
        if (!isoperator(exp[i]))
        {
            post[j] = exp[i];
            i++;
            j++;
        }
        else
        {
            if (isempty(s))
            {
                push(s, exp[i]);
                i++;
            }
            else if (prec(exp[i]) > prec(stack_top(s)))
            {
                push(s, exp[i]);
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
    return post;
}
int main()
{
    char exp[] = "a+b*c/";
    cout << "Infix : ";
    for (int i = 0; i < sizeof(exp); i++)
    {
        cout << exp[i];
    }
    cout << endl;
    cout << "Postfix : " << infix_to_post(exp) << endl;
    return 0;
}