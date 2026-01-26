#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3};
    int *b = &arr[2];
    b++;

    printf("%p\n", b);

    return 0;
}
