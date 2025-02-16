#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    printf("%d", ptr->data);
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

//   case 1 deleting the first node
struct Node *deletionFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
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

//  delete the last node
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

struct Node *deleteGivenValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {

        p = p->next;
        q = q->next;
    }
      if(q->data==value){
        p->next = q->next;
        free(q);
      }
 
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;

    second->data = 17;
    second->next = third;

    third->data = 172;
    third->next = forth;
    forth->data = 171;
    forth->next = NULL;
    printf(" linked list before deletion\n");
    linkedListTraversal(head);
    // head=deletionFirst(head); for deleting first element of the linked list
    // head = deleteAtIndex(head, 2); deleting the node of nth index
    //  head=deleteLastNode(head); deleting the last node
    head= deleteGivenValue(head,13);

    printf(" linked list after deletion\n");
    linkedListTraversal(head);
    return 0;
}
