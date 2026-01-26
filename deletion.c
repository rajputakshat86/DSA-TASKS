#include <stdio.h>

int main()
{
    int arr[10];
    int i, n = 7;
    int del, pos = -1;

    printf("Enter 7 elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to delete: ");
    scanf("%d", &del);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == del)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("Element not found in the array\n");
    }
    else
    {

        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
