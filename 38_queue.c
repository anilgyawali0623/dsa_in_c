#include <stdio.h>
#include <stdlib.h>

/*
data: storage
insertaiton end pointer
deletiion end pointer


method: enqueue
dequeue


*/

struct queue
{

    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("this queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{

    struct queue *q;
    q->size = 100;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    return 0;
    return 0;
}