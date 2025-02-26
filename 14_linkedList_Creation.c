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

    linkedListTraversal(head);
    free(head);
    free(second);
    free(third);
    free(forth);
    return 0;
}
