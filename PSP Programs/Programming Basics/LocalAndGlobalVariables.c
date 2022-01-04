#include <stdio.h>
#include <conio.h>

int a; // global variable
void main()
{
    int b; // local variable
    a = 10, b = 20;
    printf("Value of a : %d", a);
    printf("Value of b : %d", b);
    getch();
}
