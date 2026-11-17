#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks;
};

void display(struct Student s[], int n)
{
    printf("\nStudents scoring above 500:\n");

    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > 500)
        {
            printf("\nRoll Number = %d\n", s[i].roll);
            printf("Name = %s\n", s[i].name);
            printf("Marks = %d\n", s[i].marks);
        }
    }
}

int main()
{
    struct Student s[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    display(s, 10);

    return 0;
}