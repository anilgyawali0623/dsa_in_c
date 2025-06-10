#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//  top is not the pointer
struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
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

int isFull(struct Stack *ptr)
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

int main()
{
    
    struct Stack *s;
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->top = -1;
    s->size = 5;

    if (isEmpty(s))
    {
        printf("the stack is empty\n");
    }
    else
    {
        printf("the stack is not empty\n");
    }

    return 0;
}