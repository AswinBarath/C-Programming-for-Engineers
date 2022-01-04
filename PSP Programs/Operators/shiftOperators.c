/* Example program illustrating << and >> */
#include <stdio.h>
#include <conio.h>

void main()
{
    int n1 = 10, n2 = 20, i = 0;
    i = n2 << 4; /* n2 shifted left four times */
    printf("%d\n", i);
    i = n1 >> 5; /* n1 shifted right five times */
    printf("%d\n", i);
    getch();
}
