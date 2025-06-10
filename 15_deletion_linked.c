#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *deleteFirst(struct Node *head)
{

    struct Node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}

struct Node *deleteIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

// struct Node *deleteLastNode(struct Node *head)
// {
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while (q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }

struct Node *deleteLastNode(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {

        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

struct Node *deleteNodeValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        printf("value with that node is deleted\n");
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("there is no such value\n");
    }
     return head;
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = first;
    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = NULL;
    traversal(head);
    // head = deleteFirst(head);
    // head = deleteAtIndex(head, 2);
  head= deleteNodeValue(head, 3);

    printf("after \n");
    traversal(head);
}