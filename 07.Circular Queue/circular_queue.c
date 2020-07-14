#include <stdio.h>
#define Q_SIZE 5

typedef struct {
    int data[Q_SIZE + 1];
    int head, tail;
} Queue;


void enqueue(Queue *q, int item);
int dequeue(Queue *q);


int main(){

    Queue my_queue; int item;

    my_queue.head = 0;
    my_queue.tail = 0;

    enqueue(&my_queue, 1);
    printf("tail = %d\n", my_queue.tail);
    enqueue(&my_queue, 2);
    printf("tail = %d\n", my_queue.tail);

    printf("beginning head = %d\n", my_queue.head);
    item = dequeue(&my_queue);

    printf("beginning head = %d\n", my_queue.head);
    item = dequeue(&my_queue);

    printf("beginning head = %d\n", my_queue.head);
    item = dequeue(&my_queue);

    return 0;
}


void enqueue(Queue *q, int item){
    
    if ((q->tail + 1) % (Q_SIZE + 1) == q->head)
    {
        printf("Queue if full!\n");
        return;
    }

    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (Q_SIZE + 1);
}


int dequeue(Queue *q){
    int item;
    if (q->tail == q->head)
    {
        printf("Queue is empty\n");
        return -1;
    }

    item = q->data[q->head];
    q->head = (q->head + 1) % (Q_SIZE + 1);

    return item;
}