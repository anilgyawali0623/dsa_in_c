// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedListTraversal(struct Node *head)
// {
//     struct Node *ptr = head;
//     do
//     {
//         printf(" element is %d\n", ptr->data);
//         ptr = ptr->next;

//     } while (ptr != head);
// }

// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node *p = head->next;
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     //   at this point p points to the last node of this circular linked list
//     p->next = ptr;
//     ptr->next = head;
//     head = ptr;

//     return head;
// }

// int main()
// {

//     struct Node *head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 4;
//     head->next = first;
//     first->data = 33;
//     first->next = second;
//     second->data = 22;
//     second->next = third;
//     third->data = 44;
//     third->next = head;
//     linkedListTraversal(head);
//     printf("after \n");
//     head = insertAtFirst(head, 111);
//     linkedListTraversal(head);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("element %d\n", ptr->data);

        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertionAtFirst(struct Node *head, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head->next;
    ptr->data = data;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = first;
    first->data = 2;
    first->next = second;
    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = head;
    linkedListTraversal(head);

    printf("after\n");
    head = insertionAtFirst(head, 0);
    linkedListTraversal(head);
}