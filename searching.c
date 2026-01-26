#include <stdio.h>

int main()
{
    int arr[10];
    int i, key, found = 0;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found in the array\n");
    }

    return 0;
}
