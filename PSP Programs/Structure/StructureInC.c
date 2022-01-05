#include <stdio.h>

struct Student
{
    char name[20];
    int USN;
    float marks;
} st[10];

int main()
{
    int i;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter information of student %d:-", i + 1);
        printf("\n  Enter name:");
        scanf("%s", &st[i].name);
        printf("\n  Enter USN:");
        scanf("%d", &st[i].USN);
        printf("\n  Enter marks:");
        scanf("%f", &st[i].marks);
        printf("\n");
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Information of student %d:-", i + 1);
        printf("\n  Name: %s", st[i].name);
        printf("\n  Enter USN: %d", st[i].USN);
        printf("\n  Enter marks: %f", st[i].marks);
        printf("\n");
    }
    return 0;
}
