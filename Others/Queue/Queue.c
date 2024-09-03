#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front;
    int back;
    int *arr;
    int size;
};

void printQueue(struct queue *q)
{
    int i;
    for (i = q->front; i < q->back; i++)
    {
        printf("%d ", q->arr[i]);
    }
}

void enqueue(struct queue *q, int element)
{
    if (q->size == q->back)
    {
        printf("Queue is full!\n");
    }
    else
    {
        q->arr[q->back] = element;
        q->back++;
    }
}
int dequeue(struct queue *q)
{
    int temp = -1;
    if (q->front == q->back)
    {
        printf("Queue is empty!\n");
        return temp;
    }
    else
    {
        temp = q->arr[q->front];
        q->front++;
        return temp;
    }
}

int main()
{
    struct queue q;
    q.front = 0;
    q.back = 0;
    q.size = 4;

    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 10);
    printf("10 is added\n");
    enqueue(&q, 20);
    printf("20 is added\n");
    enqueue(&q, 30);
    printf("30 is added\n");
    printf("%d is removed\n", dequeue(&q));
    printQueue(&q);

    return 0;
}