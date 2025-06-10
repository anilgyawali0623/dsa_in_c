#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traversing(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertNodeAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;
    ptr->data = data;
    ptr->next = p;
    return ptr;
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

    traversing(head);
 head= insertNodeAtFirst(head,0);
 head= insertNodeAtFirst(head,60);

  printf("after\n");
 traversing(head);

    return 0;
}