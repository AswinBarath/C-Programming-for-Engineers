#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    int ch;
    for (i = 1; i <= 5; ++i)
    {
        ch = getchar();
        putchar(ch);
    }
    getch();
}
