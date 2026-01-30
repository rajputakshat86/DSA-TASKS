#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *temp;
    int n, i, value, found = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = NULL;

    for (i = 0; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->next = head;
        head = temp;
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    temp = head;
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
        printf("%d is found in the linked list\n", value);
    else
        printf("%d is not found in the linked list\n", value);

    return 0;
}
