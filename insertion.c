#include <stdio.h>

int main()
{
    int arr[6];
    int i, pos, value;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (0 to 5): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (i = 5; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    printf("Array after insertion:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
