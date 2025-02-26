#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *deletionFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
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

struct Node * deleteGivenValue(struct Node *head, int element){
     struct Node *p= head;
     struct Node * q= head->next;
    while(q->data!=element && q->next!=NULL){
         p=p->next;
          q=q->next;

    }
     if(q->data== element){
        p->next= q->next;
         free(q);
     }
      return head;
}


int main()
{
    struct Node *head, *first, *second, *third;

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
    printf("before deletion\n");
    linkedListTraversal(head);
    // head = deletionFirst(head);
    // head = deletionIndex(head, 1);
     head= deleteLastNode(head);
    printf("after deletion\n");
    linkedListTraversal(head);

    return 0;
}