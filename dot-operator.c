#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s1;

    s1.roll = 101;
    s1.marks = 95.5;
    strcpy(s1.name, "Akshat");

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
