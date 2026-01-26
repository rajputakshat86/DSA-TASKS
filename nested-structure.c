#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[20];
    int roll;
    struct Date dob;
};

int main()
{
    struct Student s1;

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Date of Birth: %02d-%02d-%04d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
