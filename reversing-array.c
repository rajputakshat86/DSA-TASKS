#include <stdio.h>

int main()
{
    int arr[] = {99, -5, 2, 3, 4, 10, 17, -51};
    int n = 8;
    int i, temp;

    printf("Original Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nReversed Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
