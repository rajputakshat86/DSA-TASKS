#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
    printf("Inserted: %d\n", value);
}

int main()
{
    int n, value;
    printf("Enter number of initial elements (Max %d): ", MAX);
    scanf("%d", &n);
    if (n > MAX)
        n = MAX;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        rear++;
        queue[rear] = value;
        if (front == -1)
            front = 0;
    }

    display();

    char choice;
    do
    {
        printf("Do you want to insert more elements? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            display();
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
