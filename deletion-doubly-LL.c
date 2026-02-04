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
    struct Node *head = NULL, *temp = NULL, *newnode, *del;
    int n, i, value, key;

    printf("Enter number of nodes: ");
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

    printf("Enter element to delete: ");
    scanf("%d", &key);

    del = head;

    while (del != NULL && del->data != key)
        del = del->next;

    if (del == NULL)
    {
        printf("Element not found");
        return 0;
    }

    if (del->prev == NULL)
        head = del->next;
    else
        del->prev->next = del->next;

    if (del->next != NULL)
        del->next->prev = del->prev;

    free(del);

    temp = head;

    printf("List after deletion: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
