#include <stdio.h>

int largest(int *, int *);

void main()
{
    int a, b, *c, *d, e;
    printf("Enter two numbers:-\n");
    scanf("%d %d", &a, &b);
    c = &a;
    d = &b;
    e = largest(c, d);
    printf("Largest of %d & %d is %d", a, b, c);
    getch();
}

int largest(int *x, int *y)
{
    return *c > *d ? *c : *d;
}
