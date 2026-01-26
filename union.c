#include <stdio.h>

union Number
{
    int i;
    float f;
    char c;
};

int main()
{
    union Number num;

    num.i = 100;
    printf("Integer: %d\n", num.i);

    num.f = 3.14;
    printf("Float: %.2f\n", num.f);

    num.c = 'A';
    printf("Character: %c\n", num.c);

    return 0;
}
