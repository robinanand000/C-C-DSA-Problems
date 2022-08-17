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
int check_exp(char *exp)
{
    stack *s = (stack *)malloc(sizeof(stack *));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isempty(s))
            {
                cout << "Unbalanced expression." << endl;
                return 0;
            }
            else
            {
                char popped_char = pop(s);
                if (!match(popped_char, exp[i]))
                {
                    cout << "Unbalanced expression." << endl;
                    return 0;
                }
            }
        }
    }
    if (isempty(s))
    {
        cout << "Balanced Expression." << endl;
        return 1;
    }
    else
    {
        cout << "Unbalanced expression." << endl;
        return 0;
    }
}

int main()
{
    char exp[] = "[{3*2(+5*4)}]";
    cout << endl;
    check_exp(exp);
    return 0;
}