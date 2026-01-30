#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *newNode, *temp;
    int value;

    head = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value for first node: ");
    scanf("%d", &head->data);
    head->next = NULL;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value to insert at beginning: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
