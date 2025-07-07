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
        printf(" the data is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertNodeAtFirst(struct Node *head, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *insertAtIndex(struct Node *head, int index, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
ptr->data= data;
ptr->next= p->next;



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
    head = insertNodeAtFirst(head, 0);
    traversal(head);
    return 0;
}