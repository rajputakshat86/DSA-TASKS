#include <stdio.h>

void printNumbers(int n)
{
    if (n > 10)
    {
        return;
    }
    printf("%d ", n);
    printNumbers(n + 1);
}

int main()
{
    int start;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Numbers from %d to 10:\n", start);
    printNumbers(start);

    return 0;
}
