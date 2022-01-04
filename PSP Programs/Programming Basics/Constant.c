#include <stdio.h>
#include <conio.h>

void main()
{
    const int a = 10;
    printf("%d", a);
    a = 20; // gives error you can't modify const
    getch();
}
