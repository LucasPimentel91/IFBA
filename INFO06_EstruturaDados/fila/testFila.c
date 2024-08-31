#include<stdio.h>
#include<stdlib.h>

/*Vamos definir a estrutura da fila que incluirá
o array, a capacidade, e os índices para a frente
(front) e para trás*/

#define MAX 1000 

//Estrutua da fila
typedef struct Queue{
    int front, rear, size;
    unsigned capacity;
    int* array;
}Queue;

Queue* createQueue(unsigned capacity){
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

int isFull(Queue* queue){
    return (queue->size == queue->capacity);
}

int isEmpty(Queue* queue){
    return (queue->size == 0);
}

void enqueue(Queue* queue, int item){
    if(isFull(queue)){
        printf("Queue overflow\n");
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d enqueued to queue\n", item);
}

int dequeue(Queue* queue){
    if(isEmpty(queue)){
        printf("Queue underflow\n");
        return -1;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

int front(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->array[queue->front];
}

int rear(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->array[queue->rear];
}

int main() {
    Queue* queue = createQueue(MAX);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    printf("%d dequeued from queue\n", dequeue(queue));
    printf("Front item is %d\n", front(queue));
    printf("Rear item is %d\n", rear(queue));

    free(queue->array);
    free(queue);

    return 0;
}





