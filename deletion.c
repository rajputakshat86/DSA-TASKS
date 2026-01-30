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
    int n, i;

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

    if (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
