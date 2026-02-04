#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *temp = NULL, *newnode;
    int n, i, value, pos, count = 0;

    printf("Enter number of initial nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        newnode->data = value;
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    printf("Enter position to insert new node: ");
    scanf("%d", &pos);

    printf("Enter data for new node: ");
    scanf("%d", &value);

    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (pos == 1)
    {
        newnode->next = head;
        if (head != NULL)
            head->prev = newnode;
        head = newnode;
    }
    else
    {
        temp = head;
        count = 1;
        while (temp != NULL && count < pos - 1)
        {
            temp = temp->next;
            count++;
        }

        if (temp == NULL)
        {
            printf("Position out of range\n");
            return 0;
        }

        newnode->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = newnode;

        temp->next = newnode;
        newnode->prev = temp;
    }

    temp = head;
    printf("Doubly Linked List after insertion: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
