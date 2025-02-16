#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *deletionNode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(head);
    return head;
}

struct Node *deletionIndex(struct Node *head, int index)
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
struct Node *deletionLast(struct Node *head)
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
struct Node *deletionValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (p->data!=value &&  q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
    }
    return head;
}
void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("value is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head, *first, *second;
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = first;

    first->data = 11;
    first->next = second;
    second->data = 12;
    second->next = NULL;
    // head = deletionNode(head);
    //  head=deletionIndex(head, 1);
    // head = deletionLast(head);
     head= deletionValue(head,10);
    traversal(head);
}