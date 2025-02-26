#include <stdio.h>
#include <stdlib.h>
struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }

    return 0;
}

int isEmpty(struct circularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }

    return 0;
}
void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("this queue is full\n");
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("this queue is empty\n");
    }
    else
    {
        q->f=(q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct circularQueue q;

    q.size = 5;
    q.f = q.r =0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 1);

    return 0;
}