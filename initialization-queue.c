#include <stdio.h>
#define MAX 10

struct Queue
{
    int arr[MAX];
    int front;
    int rear;
};

void initializeQueue(struct Queue *q)
{
    q->front = -1;
    q->rear = -1;
    printf("Queue initialized. Front = %d, Rear = %d\n", q->front, q->rear);
}

void displayQueue(struct Queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++)
        printf("%d ", q->arr[i]);
    printf("\n");
}

int main()
{
    struct Queue q;
    initializeQueue(&q);

    char choice;
    printf("Do you want to add initial elements to the queue? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        int n, value;
        printf("Enter number of elements to add (Max %d): ", MAX);
        scanf("%d", &n);
        if (n > MAX)
            n = MAX;

        for (int i = 0; i < n; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &value);
            if (q.rear == MAX - 1)
            {
                printf("Queue Overflow\n");
                break;
            }
            q.rear++;
            q.arr[q.rear] = value;
            if (q.front == -1)
                q.front = 0;
        }
        displayQueue(&q);
    }

    return 0;
}
