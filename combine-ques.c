#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int length(struct Node *head)
{
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

struct Node *insertMiddle(struct Node *head, int value)
{
    struct Node *newNode = createNode(value);
    if (head == NULL)
        return newNode;
    int mid = length(head) / 2;
    struct Node *temp = head;
    for (int i = 0; i < mid - 1; i++)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

struct Node *deleteValue(struct Node *head, int value)
{
    if (head == NULL)
        return NULL;
    if (head->data == value)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node *temp = head;
    while (temp->next != NULL && temp->next->data != value)
        temp = temp->next;
    if (temp->next != NULL)
    {
        struct Node *toDelete = temp->next;
        temp->next = temp->next->next;
        free(toDelete);
    }
    return head;
}

int main()
{
    struct Node *head = NULL;
    int arr[10], value;

    printf("Enter 10 elements for the linked list: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        struct Node *newNode = createNode(arr[i]);
        if (head == NULL)
            head = newNode;
        else
        {
            struct Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    printf("Complete linked list: ");
    printList(head);

    printf("Enter value to search: ");
    scanf("%d", &value);

    struct Node *temp = head;
    int found = 0;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            found = 1;
            break;
        }
        temp = temp->next;
    }

    if (found)
    {
        head = deleteValue(head, value);
        printf("Value found and deleted.\n");
    }
    else
    {
        head = insertMiddle(head, value);
        printf("Value not found. Inserted in the middle.\n");
    }

    printf("Updated linked list: ");
    printList(head);

    return 0;
}
