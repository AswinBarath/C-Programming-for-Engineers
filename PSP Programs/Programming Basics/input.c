#include <stdio.h>
#include <conio.h>

void main() /* program which introduces keyboard input */
{
    int number;
    printf("Type in a number \n");
    scanf("%d", &number);
    printf("The number you typed was %d\n", number);
    getch();
}
