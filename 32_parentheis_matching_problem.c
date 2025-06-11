
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *ptr)
{
    ptr->top == -1 ? 1 : 0;
}
int isFull(struct stack *ptr)
{

    ptr->top == ptr->size - 1 ? 1 : 0;
}

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf(" stack overflow cannot push\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack overflow cannt push %d\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthisisMatch(char *exp)
{
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }

    isEmpty(sp) ? 1 : 0;
}

int main()
{

    char *exp = "8)((0))";
    if (parenthisisMatch(exp))
    {
        printf("the parenthis match \n");
    }
    else
    {
        printf("the parenthis didnt match \n");
    }
}
