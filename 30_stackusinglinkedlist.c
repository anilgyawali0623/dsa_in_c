// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Node *push(struct Node *top, int data)
// {

//     if (isFull(top))
//     {
//         printf("stack overflow\n");
//     }
//     else
//     {
//         struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//         n->data = data;
//         n->next = top;
//         top = n;
//         return top;
//     }
// }

// int isFull(struct Node *top)
// {

//     struct Node *p = (struct Node *)malloc(sizeof(struct Node));
//     if (p == NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int isEmpty(struct Node *top)
// {
//     if (top == NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int pop(struct Node *top)
// {
//     if (isEmpty(top))
//     {
//         printf("stack underflow\n");
//     }
//     else
//     {
//         struct Node *n = top;
//         top = top->next;
//         int x = n->data;
//         free(n);
//         return x;
//     }
// }
// int peek(int pos)
// {
//     struct Node *ptr = top;
//     for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
//     {
//         ptr = ptr->next;
//     }
//     if (ptr != NULL)
//     {
//         return ptr->data;
//     }
//     else
//     {
//         return -1;
//     }
// }
// int main()
// {
//     struct Node *top = NULL;

//     push(top, 23);
// printf("value at peak", peek(2));
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int isFull(struct Node *ptr)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int data)
{
    if (isFull(top))
    {
        printf("the stack is overflow");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}
 
 int pop(struct Node *top){
    if(isEmpty(top)){
          printf("the stack is underflow \n");
    }else{
         struct Node *n= top;
          top= n->next;
          int x = n->data;
           free(n);
            return x;
    }
 }



int main()
{
    return 0;
}