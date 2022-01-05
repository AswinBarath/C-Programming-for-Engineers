#include <stdio.h>
#include <conio.h>

int sum(int, int); // Function prototype (or) declaration

int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = sum(a, b); // Function call
    printf("Sum = ", c);
    return 0;
}

int sum(int x, int y) // Function definition
{
    return x + y;
}
